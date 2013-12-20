CC = $(CXX)

OPT = -O0 -ggdb
WARN = -Wall -Wno-unused-function -finline-functions
INCPATH = -I. -I../third_party/gtest-1.7.0/include
CFLAGS = $(WARN) $(OPT) $(INCPATH)


GTEST = -L../third_party/gtest-1.7.0 -lgtest_main -lgtest -lpthread

OBJECTS = ./0_start/helloworld.o \
		  ./1_TwoSum/TwoSum.o \
		  ./2_MedianOfTwoSortedArrays/MedianOfTwoSortedArrays.o \
		  ./3_LongestSubstringWithoutRepeatingCharacters/LongestSubstringWithoutRepeatingCharacters.o \
		  ./4_AddTwoNumbers/AddTwoNumbers.o \
		  ./5_LongestPalindromicSubstring/LongestPalindromicSubstring.o \
		  ./6_ZigZagConversion/ZigZagConversion.o \
		  ./7_ReverseInteger/ReverseInteger.o \
		  ./8_StringToInteger/StringToInteger.o \
		  ./9_PalindromeNumber/PalindromeNumber.o \
		  ./10_RegularExpressionMatching/RegularExpressionMatching.o \
		  ./11_ContainerWithMostWater/ContainerWithMostWater.o \

TESTS = helloworld_test \
		TwoSum_test \
		MedianOfTwoSortedArrays_test \
		LongestSubstringWithoutRepeatingCharacters_test \
		AddTwoNumbers_test \
		LongestPalindromicSubstring_test \
		ZigZagConversion_test \
		ReverseInteger_test \
		StringToInteger_test \
		PalindromeNumber_test \
		RegularExpressionMatching_test \
		ContainerWithMostWater_test \

all: gtest $(OBJECTS) $(TESTS)

$(OBJECTS): %.o: %.cc
	$(CC) $(CFLAGS) -c $< -o $@

gtest:
	cmake ../third_party/gtest-1.7.0/CMakeLists.txt
	make -C ../third_party/gtest-1.7.0/

helloworld_test: ./0_start/helloworld_test.cc ./0_start/helloworld.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
TwoSum_test: ./1_TwoSum/TwoSum_test.cc ./1_TwoSum/TwoSum.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MedianOfTwoSortedArrays_test: ./2_MedianOfTwoSortedArrays/MedianOfTwoSortedArrays_test.cc ./2_MedianOfTwoSortedArrays/MedianOfTwoSortedArrays.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LongestSubstringWithoutRepeatingCharacters_test: ./3_LongestSubstringWithoutRepeatingCharacters/LongestSubstringWithoutRepeatingCharacters_test.cc ./3_LongestSubstringWithoutRepeatingCharacters/LongestSubstringWithoutRepeatingCharacters.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
AddTwoNumbers_test: ./4_AddTwoNumbers/AddTwoNumbers_test.cc ./4_AddTwoNumbers/AddTwoNumbers.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LongestPalindromicSubstring_test: ./5_LongestPalindromicSubstring/LongestPalindromicSubstring_test.cc ./5_LongestPalindromicSubstring/LongestPalindromicSubstring.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ZigZagConversion_test: ./6_ZigZagConversion/ZigZagConversion_test.cc ./6_ZigZagConversion/ZigZagConversion.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ReverseInteger_test: ./7_ReverseInteger/ReverseInteger_test.cc ./7_ReverseInteger/ReverseInteger.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
StringToInteger_test: ./8_StringToInteger/StringToInteger_test.cc ./8_StringToInteger/StringToInteger.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PalindromeNumber_test: ./9_PalindromeNumber/PalindromeNumber_test.cc ./9_PalindromeNumber/PalindromeNumber.o 
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RegularExpressionMatching_test: ./10_RegularExpressionMatching/RegularExpressionMatching_test.cc ./10_RegularExpressionMatching/RegularExpressionMatching.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ContainerWithMostWater_test: ./11_ContainerWithMostWater/ContainerWithMostWater_test.cc ./11_ContainerWithMostWater/ContainerWithMostWater.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@

clean:
	rm -f */*.o *_test
