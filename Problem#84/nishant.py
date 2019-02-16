class Solution(object):
    def largestRectangleArea(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        hist = heights
        heights = list()
        index = list()
        

        current_index = -1
        max_area = 0
        for curr_height in hist:
            current_index += 1

            """
                NOTE: Push if the stack is empty or if the previous height is less than the current hight
            """
            #print "\n" + "-"*20 + "\n"
            if not heights or heights[-1]<curr_height:
                #print "appending",curr_height,
                #print heights[-1] if heights else "\n"

                heights.append(curr_height)
                index.append(current_index)
                #print heights

            else:
                    temp_area = 0
                    last_index = 0
                    while (heights and heights[-1] >= curr_height   ):
                        #print "in selectond condition"
                        #for i in heights:
                        #    print i, " ",

                        last_index = index.pop()
                        temp_area = heights.pop() * (current_index - last_index)
                        if temp_area > max_area:
                            max_area = temp_area
                    #print "DEBUG: max area temp in for loop is", max_area
                    heights.append(curr_height)
                    index.append(last_index)

        while( heights):
            temp_area = heights.pop()* (len(hist) - index.pop())
            if temp_area > max_area:
                max_area = temp_area
                #print "DEBUG: max area temp is", max_area

        return max_area
