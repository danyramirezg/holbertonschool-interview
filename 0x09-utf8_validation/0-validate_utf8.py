#!/usr/bin/python3
"""
UTF-8 validation.
"""


def validUTF8(data):
    """
    method that determines if a given data set represents a valid
    UTF-8 encoding.
    """

    pattern1 = 1 << 6
    pattern = 1 << 7
    byte_num = 0

    for i in data:
        pattern_byte = 1 << 7

        if byte_num == 0:
            while pattern_byte & i:
                byte_num += 1
                pattern_byte = pattern_byte >> 1

            if byte_num == 0:
                continue

            if byte_num == 1 or byte_num > 4:
                return False
        else:
            if not (i & pattern and not (i & pattern1)):
                    return False

        byte_num -= 1

    if byte_num == 0:
        return True

    return False
