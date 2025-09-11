# week01-2b.py 使用 Python 的版本2使用 .find()函式
# LeetCode 28.Find the Index of the Frist Occurrence in a String
# 在haystack乾稻草堆裡找到needle針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
