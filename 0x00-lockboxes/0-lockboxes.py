#!/usr/bin/python3


def canUnlockAll(boxes):

    numbers = []
    unlock = []
    len_boxes = len(boxes)

    for box in boxes:
        unlock.append(0)
    unlock[0] = 1
    # print(unlock)

    for j in boxes[0]:
        numbers.append(j)
        # print(j)

    for number in numbers:
        if number < len_boxes and unlock[number] == 0:
            unlock[number] = 1

            for j in boxes[number]:
                if j not in numbers:
                    numbers.append(j)

    if 0 in unlock:
        return False
    else:
        return True
