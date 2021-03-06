CC = g++

OPT = -O0 -ggdb -std=c++11
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
		  ./12_IntegerToRoman/IntegerToRoman.o \
		  ./13_RomanToInteger/RomanToInteger.o \
		  ./14_LongestCommonPrefix/LongestCommonPrefix.o \
		  ./15_ThreeSum/ThreeSum.o \
		  ./16_ThreeSumClosest/ThreeSumClosest.o \
		  ./17_FourSum/FourSum.o \
		  ./18_LetterCombinationsOfAPhoneNumber/LetterCombinationsOfAPhoneNumber.o \
		  ./19_RemoveNthNodeFromEndOfList/RemoveNthNodeFromEndOfList.o \
		  ./20_ValidParentheses/ValidParenttheses.o \
		  ./21_GenerateParentheses/GenerateParentheses.o \
		  ./22_MergeKSortedLists/MergeKSortedLists.o \
		  ./23_SwapNodesInPairs/SwapNodesInPairs.o \
		  ./24_ReverseNodesInKGroup/ReverseNodesInKGroup.o \
		  ./25_RemoveDuplicatesFromSortedArray/RemoveDuplicatesFromSortedArray.o \
		  ./26_RemoveElement/RemoveElement.o \
		  ./27_ImplementStrStr/ImplementStrStr.o \
		  ./28_DivideTwoIntegers/DivideTwoIntegers.o \
		  ./29_SubstringWithConcatenationOfAllWords/SubstringWithConcatenationOfAllWords.o \
		  ./30_NextPermutation/NextPermutation.o \
		  ./31_LongestValidParentheses/LongestValidParentheses.o \
		  ./32_SearchInRotatedSortedArray/SearchInRotatedSortedArray.o \
		  ./33_SearchForARange/SearchForARange.o \
		  ./34_SearchInsertPosition/SearchInsertPosition.o \
		  ./35_ValidSudoku/ValidSudoku.o \
		  ./36_SudokuSolver/SudokuSolver.o \
		  ./37_CountAndSay/CountAndSay.o \
		  ./38_CombinationSum/CombinationSum.o \
		  ./39_CombinationSumII/CombinationSumII.o \
		  ./40_FirstMissingPositive/FirstMissingPositive.o \
		  ./41_TrappingRainWater/TrappingRainWater.o \
		  ./42_MultiplyStrings/MultiplyStrings.o \
		  ./43_WildcardMatching/WildcardMatching.o \
		  ./44_JumpGameII/JumpGameII.o \
		  ./45_Permutations/Permutations.o \
		  ./46_PermutationsII/PermutationsII.o \
		  ./47_RotateImage/RotateImage.o \
		  ./48_Anagrams/Anagrams.o \
		  ./49_Pow_xn/Pow_xn.o \
		  ./50_N-Queens/N-Queens.o \
		  ./51_N-QueensII/N-QueensII.o \
		  ./52_MaximumSubarray/MaximumSubarray.o \
		  ./53_SpiralMatrix/SpiralMatrix.o \
		  ./54_JumpGame/JumpGame.o \
		  ./55_MergeIntervals/MergeIntervals.o \
		  ./56_InsertInterval/InsertInterval.o \
		  ./57_LengthOfLastWord/LengthOfLastWord.o \
		  ./58_SpiralMatrixII/SpiralMatrixII.o \
		  ./59_PermutationSequence/PermutationSequence.o \
		  ./60_RotateList/RotateList.o \
		  ./61_UniquePaths/UniquePaths.o \
		  ./62_UniquePathsII/UniquePathsII.o \
		  ./63_MinimumPathSum/MinimumPathSum.o \
		  ./64_MergeTwoSortedLists/MergeTwoSortedLists.o \
		  ./65_AddBinary/AddBinary.o \
		  ./66_ValidNumber/ValidNumber.o \
		  ./67_PlusOne/PlusOne.o \
		  ./68_TextJustification/TextJustification.o \
		  ./69_Sqrt_x/Sqrt_x.o \
		  ./70_ClimbingStairs/ClimbingStairs.o \
		  ./71_SimplifyPath/SimplifyPath.o \
		  ./72_EditDistance/EditDistance.o \
		  ./73_SetMatrixZeroes/SetMatrixZeroes.o \
		  ./74_SearchA2DMatrix/SearchA2DMatrix.o \
		  ./75_SortColors/SortColors.o \
		  ./76_MinimumWindowSubstring/MinimumWindowSubstring.o \
		  ./77_Combinations/Combinations.o \
		  ./78_Subsets/Subsets.o \
		  ./79_WordSearch/WordSearch.o \
		  ./80_RemoveDuplicatesFromSortedArrayII/RemoveDuplicatesFromSortedArrayII.o \
		  ./81_SearchInRotatedSortedArrayII/SearchInRotatedSortedArrayII.o \
		  ./82_RemoveDuplicatesFromSortedList/RemoveDuplicatesFromSortedList.o \
		  ./83_RemoveDuplicatesFromSortedListII/RemoveDuplicatesFromSortedListII.o \
		  ./84_LargestRectangleInHistogram/LargestRectangleInHistogram.o \
		  ./85_MaximalRectangle/MaximalRectangle.o \
		  ./86_PartitionList/PartitionList.o \
		  ./87_ScrambleString/ScrambleString.o \
		  ./88_MergeSortedArray/MergeSortedArray.o \
		  ./89_GrayCode/GrayCode.o \
		  ./90_DecodeWays/DecodeWays.o \
		  ./91_SubsetsII/SubsetsII.o \
		  ./92_ReverseLinkedListII/ReverseLinkedListII.o \
		  ./93_RestoreIPAddresses/RestoreIPAddress.o \
		  ./94_BinaryTreeInorderTraversal/BinaryTreeInorderTraversal.o \
		  ./95_UniqueBinarySearchTrees/UniqueBinarySearchTrees.o \
		  ./96_UniqueBinarySearchTreesII/UniqueBinarySearchTreesII.o \
		  ./97_InterleavingString/InterleavingString.o \
		  ./98_ValidateBinarySearchTree/ValidateBinarySearchTree.o \
		  ./99_RecoverBinarySearchTree/RecoverBinarySearchTree.o \
		  ./100_SameTree/SameTree.o \
		  ./101_SymmetricTree/SymmetricTree.o \
		  ./102_BinaryTreeLevelOrderTraversal/BinaryTreeLevelOrderTraversal.o \
		  ./103_BinaryTreeZigzagLevelOrderTraversal/BinaryTreeZigzagLevelOrderTraversal.o \
		  ./104_MaximumDepthOfBinaryTree/MaximumDepthOfBinaryTree.o \
		  ./105_ConstructBinaryTreeFromPreorderAndInorderTraversal/ConstructBinaryTreeFromPreorderAndInorderTraversal.o \
		  ./106_ConstructBinaryTreeFromInorderAndPostorderTraversal/ConstructBinaryTreeFromInorderAndPostorderTraversal.o \
		  ./107_BinaryTreeLevelOrderTraversalII/BinaryTreeLevelOrderTraversalII.o \
		  ./108_ConvertSortedArrayToBinarySearchTree/ConvertSortedArrayToBinarySearchTree.o \
		  ./109_ConvertSortedListToBinarySearchTree/ConvertSortedListToBinarySearchTree.o \
		  ./110_BalancedBinaryTree/BalancedBinaryTree.o \
		  ./111_MinimumDepthOfBinaryTree/MinimumDepthOfBinaryTree.o \
		  ./112_PathSum/PathSum.o \
		  ./113_PathSumII/PathSumII.o \
		  ./114_FlattenBinaryTreeToLinkedList/FlattenBinaryTreeToLinkedList.o \
		  ./115_DistinctSubsequences/DistinctSubsequences.o \
		  ./116_PopulatingNextRightPointersInEachNode/PopulatingNextRightPointersInEachNode.o \
		  ./117_PopulatingNextRightPointersInEachNodeII/PopulatingNextRightPointersInEachNodeII.o \
		  ./118_PascalsTriangle/PascalsTriangle.o \
		  ./119_PascalsTriangleII/PascalsTriangleII.o \
		  ./120_Triangle/Triangle.o \
		  ./121_BestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.o \
		  ./122_BestTimeToBuyAndSellStockII/BestTimeToBuyAndSellStockII.o \
		  ./123_BestTimeToBuyAndSellStockIII/BestTimeToBuyAndSellStockIII.o \
		  ./124_BinaryTreeMaximumPathSum/BinaryTreeMaximumPathSum.o \
		  ./125_ValidPalindrome/ValidPalindrome.o \
		  ./126_WordLadder/WordLadder.o \
		  ./127_WordLadderII/WordLadderII.o \
		  ./128_LongestConsecutiveSequence/LongestConsecutiveSequence.o \
		  ./129_SumRootToLeafNumbers/SumRootToLeafNumbers.o \
		  ./130_SurroundedRegions/SurroundedRegions.o \
		  ./131_PalindromePartitioning/PalindromePartitioning.o \
		  ./132_PalindromePartitioningII/PalindromePartitioningII.o \
		  ./133_CloneGraph/CloneGraph.o \
		  ./134_GasStation/GasStation.o \
		  ./135_Candy/Candy.o \
		  ./136_SingleNumber/SingleNumber.o \
		  ./137_SingleNumberII/SingleNumberII.o \
		  ./138_CopyListWithRandomPointer/CopyListWithRandomPointer.o \
		  ./139_WordBreak/WordBreak.o \
		  ./140_WordBreakII/WordBreakII.o \
		  ./141_LinkedListCycle/LinkedListCycle.o \
		  ./142_LinkedListCycleII/LinkedListCycleII.o \
		  ./143_ReorderList/ReorderList.o \
		  ./144_BinaryTreePreorderTraversal/BinaryTreePreorderTraversal.o \
		  ./145_BinaryTreePostorderTraversal/BinaryTreePostorderTraversal.o \
		  ./146_LRUCache/LRUCache.o \
		  ./147_InsertionSortList/InsertionSortList.o \
		  ./148_SortList/SortList.o \
		  ./149_MaxPointsOnALine/MaxPointsOnALine.o \
		  ./150_EvaluateReversePolishNotation/EvaluateReversePolishNotation.o \
		  ./151_ReverseWordsInAString/ReverseWordsInAString.o \
		  ./152_MaximumProductSubarray/MaximumProductSubarray.o \
		  ./153_FindMinimumInRotatedSortedArray/FindMinimumInRotatedSortedArray.o \
		  ./154_FindMinimumInRotatedSortedArrayII/FindMinimumInRotatedSortedArrayII.o \

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
		IntegerToRoman_test \
		RomanToInteger_test \
		LongestCommonPrefix_test \
		ThreeSum_test \
		ThreeSumClosest_test \
		FourSum_test \
		LetterCombinationsOfAPhoneNumber_test \
		RemoveNthNodeFromEndOfList_test \
		ValidParenttheses_test \
		GenerateParentheses_test \
		MergeKSortedLists_test \
		SwapNodesInPairs_test \
		ReverseNodesInKGroup_test \
		RemoveDuplicatesFromSortedArray_test \
		RemoveElement_test \
		ImplementStrStr_test \
		DivideTwoIntegers_test \
		SubstringWithConcatenationOfAllWords_test \
		NextPermutation_test \
		LongestValidParentheses_test \
		SearchInRotatedSortedArray_test \
		SearchForARange_test \
		SearchInsertPosition_test \
		ValidSudoku_test \
		SudokuSolver_test \
		CountAndSay_test \
		CombinationSum_test \
		CombinationSumII_test \
		FirstMissingPositive_test \
		TrappingRainWater_test \
		MultiplyStrings_test \
		WildcardMatching_test \
		JumpGameII_test \
		Permutations_test \
		PermutationsII_test \
		RotateImage_test \
		Anagrams_test \
		Pow_xn_test \
		N-Queens_test \
		N-QueensII_test \
		MaximumSubarray_test \
		SpiralMatrix_test \
		JumpGame_test \
		MergeIntervals_test \
		InsertInterval_test \
		LengthOfLastWord_test \
		SpiralMatrixII_test \
		PermutationSequence_test \
		RotateList_test \
		UniquePaths_test \
		UniquePathsII_test \
		MinimumPathSum_test \
		MergeTwoSortedLists_test \
		AddBinary_test \
		ValidNumber_test \
		PlusOne_test \
		TextJustification_test \
		Sqrt_x_test \
		ClimbingStairs_test \
		SimplifyPath_test \
		EditDistance_test \
		SetMatrixZeroes_test \
		SearchA2DMatrix_test \
		SortColors_test \
		MinimumWindowSubstring_test \
		Combinations_test \
		Subsets_test \
		WordSearch_test \
		RemoveDuplicatesFromSortedArrayII_test \
		SearchInRotatedSortedArrayII_test \
		RemoveDuplicatesFromSortedList_test \
		RemoveDuplicatesFromSortedListII_test \
		LargestRectangleInHistogram_test \
		MaximalRectangle_test \
		PartitionList_test \
		ScrambleString_test \
		MergeSortedArray_test \
		GrayCode_test \
		DecodeWays_test \
		SubsetsII_test \
		ReverseLinkedListII_test \
		RestoreIPAddress_test \
		BinaryTreeInorderTraversal_test \
		UniqueBinarySearchTrees_test \
		UniqueBinarySearchTreesII_test \
		InterleavingString_test \
		ValidateBinarySearchTree_test \
		RecoverBinarySearchTree_test \
		SameTree_test \
		SymmetricTree_test \
		BinaryTreeLevelOrderTraversal_test \
		BinaryTreeZigzagLevelOrderTraversal_test \
		MaximumDepthOfBinaryTree_test \
		ConstructBinaryTreeFromPreorderAndInorderTraversal_test \
		ConstructBinaryTreeFromInorderAndPostorderTraversal_test \
		BinaryTreeLevelOrderTraversalII_test \
		ConvertSortedArrayToBinarySearchTree_test \
		ConvertSortedListToBinarySearchTree_test \
		BalancedBinaryTree_test \
		MinimumDepthOfBinaryTree_test \
		PathSum_test \
		PathSumII_test \
		FlattenBinaryTreeToLinkedList_test \
		DistinctSubsequences_test \
		PopulatingNextRightPointersInEachNode_test \
		PopulatingNextRightPointersInEachNodeII_test \
		PascalsTriangle_test \
		PascalsTriangleII_test \
		Triangle_test \
		BestTimeToBuyAndSellStock_test \
		BestTimeToBuyAndSellStockII_test \
		BestTimeToBuyAndSellStockIII_test \
		BinaryTreeMaximumPathSum_test \
		ValidPalindrome_test \
		WordLadder_test \
		WordLadderII_test \
		LongestConsecutiveSequence_test \
		SumRootToLeafNumbers_test \
		SurroundedRegions_test \
		PalindromePartitioning_test \
		PalindromePartitioningII_test \
		CloneGraph_test \
		GasStation_test \
		Candy_test \
		SingleNumber_test \
		SingleNumberII_test \
		CopyListWithRandomPointer_test \
		WordBreak_test \
		WordBreakII_test \
		LinkedListCycle_test \
		LinkedListCycleII_test \
		ReorderList_test \
		BinaryTreePreorderTraversal_test \
		BinaryTreePostorderTraversal_test \
		LRUCache_test \
		InsertionSortList_test \
		SortList_test \
		MaxPointsOnALine_test \
		EvaluateReversePolishNotation_test \
		ReverseWordsInAString_test \
		MaximumProductSubarray_test \
		FindMinimumInRotatedSortedArray_test \
		FindMinimumInRotatedSortedArrayII_test \

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
IntegerToRoman_test: ./12_IntegerToRoman/IntegerToRoman_test.cc ./12_IntegerToRoman/IntegerToRoman.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RomanToInteger_test: ./13_RomanToInteger/RomanToInteger_test.cc ./13_RomanToInteger/RomanToInteger.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LongestCommonPrefix_test: ./14_LongestCommonPrefix/LongestCommonPrefix_test.cc ./14_LongestCommonPrefix/LongestCommonPrefix.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ThreeSum_test: ./15_ThreeSum/ThreeSum_test.cc ./15_ThreeSum/ThreeSum.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ThreeSumClosest_test: ./16_ThreeSumClosest/ThreeSumClosest_test.cc ./16_ThreeSumClosest/ThreeSumClosest.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
FourSum_test: ./17_FourSum/FourSum_test.cc ./17_FourSum/FourSum.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LetterCombinationsOfAPhoneNumber_test: ./18_LetterCombinationsOfAPhoneNumber/LetterCombinationsOfAPhoneNumber_test.cc ./18_LetterCombinationsOfAPhoneNumber/LetterCombinationsOfAPhoneNumber.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RemoveNthNodeFromEndOfList_test: ./19_RemoveNthNodeFromEndOfList/RemoveNthNodeFromEndOfList_test.cc ./19_RemoveNthNodeFromEndOfList/RemoveNthNodeFromEndOfList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ValidParenttheses_test: ./20_ValidParentheses/ValidParenttheses_test.cc ./20_ValidParentheses/ValidParenttheses.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
GenerateParentheses_test: ./21_GenerateParentheses/GenerateParentheses_test.cc ./21_GenerateParentheses/GenerateParentheses.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MergeKSortedLists_test: ./22_MergeKSortedLists/MergeKSortedLists_test.cc ./22_MergeKSortedLists/MergeKSortedLists.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SwapNodesInPairs_test: ./23_SwapNodesInPairs/SwapNodesInPairs_test.cc ./23_SwapNodesInPairs/SwapNodesInPairs.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ReverseNodesInKGroup_test: ./24_ReverseNodesInKGroup/ReverseNodesInKGroup_test.cc ./24_ReverseNodesInKGroup/ReverseNodesInKGroup.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RemoveDuplicatesFromSortedArray_test: ./25_RemoveDuplicatesFromSortedArray/RemoveDuplicatesFromSortedArray_test.cc ./25_RemoveDuplicatesFromSortedArray/RemoveDuplicatesFromSortedArray.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RemoveElement_test: ./26_RemoveElement/RemoveElement_test.cc ./26_RemoveElement/RemoveElement.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ImplementStrStr_test: ./27_ImplementStrStr/ImplementStrStr_test.cc ./27_ImplementStrStr/ImplementStrStr.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
DivideTwoIntegers_test: ./28_DivideTwoIntegers/DivideTwoIntegers_test.cc ./28_DivideTwoIntegers/DivideTwoIntegers.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SubstringWithConcatenationOfAllWords_test: ./29_SubstringWithConcatenationOfAllWords/SubstringWithConcatenationOfAllWords_test.cc ./29_SubstringWithConcatenationOfAllWords/SubstringWithConcatenationOfAllWords.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
NextPermutation_test: ./30_NextPermutation/NextPermutation_test.cc ./30_NextPermutation/NextPermutation.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LongestValidParentheses_test: ./31_LongestValidParentheses/LongestValidParentheses_test.cc ./31_LongestValidParentheses/LongestValidParentheses.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SearchInRotatedSortedArray_test: ./32_SearchInRotatedSortedArray/SearchInRotatedSortedArray_test.cc ./32_SearchInRotatedSortedArray/SearchInRotatedSortedArray.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SearchForARange_test: ./33_SearchForARange/SearchForARange_test.cc ./33_SearchForARange/SearchForARange.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SearchInsertPosition_test: ./34_SearchInsertPosition/SearchInsertPosition_test.cc ./34_SearchInsertPosition/SearchInsertPosition.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ValidSudoku_test: ./35_ValidSudoku/ValidSudoku_test.cc ./35_ValidSudoku/ValidSudoku.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SudokuSolver_test: ./36_SudokuSolver/SudokuSolver_test.cc ./36_SudokuSolver/SudokuSolver.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
CountAndSay_test: ./37_CountAndSay/CountAndSay_test.cc ./37_CountAndSay/CountAndSay.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
CombinationSum_test: ./38_CombinationSum/CombinationSum_test.cc ./38_CombinationSum/CombinationSum.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
CombinationSumII_test: ./39_CombinationSumII/CombinationSumII_test.cc ./39_CombinationSumII/CombinationSumII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
FirstMissingPositive_test: ./40_FirstMissingPositive/FirstMissingPositive_test.cc ./40_FirstMissingPositive/FirstMissingPositive.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
TrappingRainWater_test: ./41_TrappingRainWater/TrappingRainWater_test.cc ./41_TrappingRainWater/TrappingRainWater.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MultiplyStrings_test: ./42_MultiplyStrings/MultiplyStrings_test.cc ./42_MultiplyStrings/MultiplyStrings.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
WildcardMatching_test: ./43_WildcardMatching/WildcardMatching_test.cc ./43_WildcardMatching/WildcardMatching.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
JumpGameII_test: ./44_JumpGameII/JumpGameII_test.cc ./44_JumpGameII/JumpGameII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Permutations_test: ./45_Permutations/Permutations_test.cc ./45_Permutations/Permutations.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PermutationsII_test: ./46_PermutationsII/PermutationsII_test.cc ./46_PermutationsII/PermutationsII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RotateImage_test: ./47_RotateImage/RotateImage_test.cc ./47_RotateImage/RotateImage.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Anagrams_test: ./48_Anagrams/Anagrams_test.cc ./48_Anagrams/Anagrams.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Pow_xn_test: ./49_Pow_xn/Pow_xn_test.cc ./49_Pow_xn/Pow_xn.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
N-Queens_test: ./50_N-Queens/N-Queens_test.cc ./50_N-Queens/N-Queens.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
N-QueensII_test: ./51_N-QueensII/N-QueensII_test.cc ./51_N-QueensII/N-QueensII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MaximumSubarray_test: ./52_MaximumSubarray/MaximumSubarray_test.cc ./52_MaximumSubarray/MaximumSubarray.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SpiralMatrix_test: ./53_SpiralMatrix/SpiralMatrix_test.cc ./53_SpiralMatrix/SpiralMatrix.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
JumpGame_test: ./54_JumpGame/JumpGame_test.cc ./54_JumpGame/JumpGame.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MergeIntervals_test: ./55_MergeIntervals/MergeIntervals_test.cc ./55_MergeIntervals/MergeIntervals.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
InsertInterval_test: ./56_InsertInterval/InsertInterval_test.cc ./56_InsertInterval/InsertInterval.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LengthOfLastWord_test: ./57_LengthOfLastWord/LengthOfLastWord_test.cc ./57_LengthOfLastWord/LengthOfLastWord.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SpiralMatrixII_test: ./58_SpiralMatrixII/SpiralMatrixII_test.cc ./58_SpiralMatrixII/SpiralMatrixII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PermutationSequence_test: ./59_PermutationSequence/PermutationSequence_test.cc ./59_PermutationSequence/PermutationSequence.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RotateList_test: ./60_RotateList/RotateList_test.cc ./60_RotateList/RotateList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
UniquePaths_test: ./61_UniquePaths/UniquePaths_test.cc ./61_UniquePaths/UniquePaths.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
UniquePathsII_test: ./62_UniquePathsII/UniquePathsII_test.cc ./62_UniquePathsII/UniquePathsII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MinimumPathSum_test: ./63_MinimumPathSum/MinimumPathSum_test.cc ./63_MinimumPathSum/MinimumPathSum.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MergeTwoSortedLists_test: ./64_MergeTwoSortedLists/MergeTwoSortedLists_test.cc ./64_MergeTwoSortedLists/MergeTwoSortedLists.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
AddBinary_test: ./65_AddBinary/AddBinary_test.cc ./65_AddBinary/AddBinary.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ValidNumber_test: ./66_ValidNumber/ValidNumber_test.cc ./66_ValidNumber/ValidNumber.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PlusOne_test: ./67_PlusOne/PlusOne_test.cc ./67_PlusOne/PlusOne.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
TextJustification_test: ./68_TextJustification/TextJustification_test.cc ./68_TextJustification/TextJustification.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Sqrt_x_test: ./69_Sqrt_x/Sqrt_x_test.cc ./69_Sqrt_x/Sqrt_x.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ClimbingStairs_test: ./70_ClimbingStairs/ClimbingStairs_test.cc ./70_ClimbingStairs/ClimbingStairs.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SimplifyPath_test: ./71_SimplifyPath/SimplifyPath_test.cc ./71_SimplifyPath/SimplifyPath.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
EditDistance_test: ./72_EditDistance/EditDistance_test.cc ./72_EditDistance/EditDistance.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SetMatrixZeroes_test: ./73_SetMatrixZeroes/SetMatrixZeroes_test.cc ./73_SetMatrixZeroes/SetMatrixZeroes.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SearchA2DMatrix_test: ./74_SearchA2DMatrix/SearchA2DMatrix_test.cc ./74_SearchA2DMatrix/SearchA2DMatrix.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SortColors_test: ./75_SortColors/SortColors_test.cc ./75_SortColors/SortColors.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MinimumWindowSubstring_test: ./76_MinimumWindowSubstring/MinimumWindowSubstring_test.cc ./76_MinimumWindowSubstring/MinimumWindowSubstring.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Combinations_test: ./77_Combinations/Combinations_test.cc ./77_Combinations/Combinations.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Subsets_test: ./78_Subsets/Subsets_test.cc ./78_Subsets/Subsets.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
WordSearch_test: ./79_WordSearch/WordSearch_test.cc ./79_WordSearch/WordSearch.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RemoveDuplicatesFromSortedArrayII_test: ./80_RemoveDuplicatesFromSortedArrayII/RemoveDuplicatesFromSortedArrayII_test.cc ./80_RemoveDuplicatesFromSortedArrayII/RemoveDuplicatesFromSortedArrayII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SearchInRotatedSortedArrayII_test: ./81_SearchInRotatedSortedArrayII/SearchInRotatedSortedArrayII_test.cc ./81_SearchInRotatedSortedArrayII/SearchInRotatedSortedArrayII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RemoveDuplicatesFromSortedList_test: ./82_RemoveDuplicatesFromSortedList/RemoveDuplicatesFromSortedList_test.cc ./82_RemoveDuplicatesFromSortedList/RemoveDuplicatesFromSortedList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RemoveDuplicatesFromSortedListII_test: ./83_RemoveDuplicatesFromSortedListII/RemoveDuplicatesFromSortedListII_test.cc ./83_RemoveDuplicatesFromSortedListII/RemoveDuplicatesFromSortedListII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LargestRectangleInHistogram_test: ./84_LargestRectangleInHistogram/LargestRectangleInHistogram_test.cc ./84_LargestRectangleInHistogram/LargestRectangleInHistogram.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MaximalRectangle_test: ./85_MaximalRectangle/MaximalRectangle_test.cc ./85_MaximalRectangle/MaximalRectangle.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PartitionList_test: ./86_PartitionList/PartitionList_test.cc ./86_PartitionList/PartitionList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ScrambleString_test: ./87_ScrambleString/ScrambleString_test.cc ./87_ScrambleString/ScrambleString.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MergeSortedArray_test: ./88_MergeSortedArray/MergeSortedArray_test.cc ./88_MergeSortedArray/MergeSortedArray.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
GrayCode_test: ./89_GrayCode/GrayCode_test.cc ./89_GrayCode/GrayCode.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
DecodeWays_test: ./90_DecodeWays/DecodeWays_test.cc ./90_DecodeWays/DecodeWays.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SubsetsII_test: ./91_SubsetsII/SubsetsII_test.cc ./91_SubsetsII/SubsetsII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ReverseLinkedListII_test: ./92_ReverseLinkedListII/ReverseLinkedListII_test.cc ./92_ReverseLinkedListII/ReverseLinkedListII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RestoreIPAddress_test: ./93_RestoreIPAddresses/RestoreIPAddress_test.cc ./93_RestoreIPAddresses/RestoreIPAddress.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreeInorderTraversal_test: ./94_BinaryTreeInorderTraversal/BinaryTreeInorderTraversal_test.cc ./94_BinaryTreeInorderTraversal/BinaryTreeInorderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
UniqueBinarySearchTrees_test: ./95_UniqueBinarySearchTrees/UniqueBinarySearchTrees_test.cc ./95_UniqueBinarySearchTrees/UniqueBinarySearchTrees.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
UniqueBinarySearchTreesII_test: ./96_UniqueBinarySearchTreesII/UniqueBinarySearchTreesII_test.cc ./96_UniqueBinarySearchTreesII/UniqueBinarySearchTreesII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
InterleavingString_test: ./97_InterleavingString/InterleavingString_test.cc ./97_InterleavingString/InterleavingString.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ValidateBinarySearchTree_test: ./98_ValidateBinarySearchTree/ValidateBinarySearchTree_test.cc ./98_ValidateBinarySearchTree/ValidateBinarySearchTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
RecoverBinarySearchTree_test: ./99_RecoverBinarySearchTree/RecoverBinarySearchTree_test.cc ./99_RecoverBinarySearchTree/RecoverBinarySearchTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SameTree_test: ./100_SameTree/SameTree_test.cc ./100_SameTree/SameTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SymmetricTree_test: ./101_SymmetricTree/SymmetricTree_test.cc ./101_SymmetricTree/SymmetricTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreeLevelOrderTraversal_test: ./102_BinaryTreeLevelOrderTraversal/BinaryTreeLevelOrderTraversal_test.cc ./102_BinaryTreeLevelOrderTraversal/BinaryTreeLevelOrderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreeZigzagLevelOrderTraversal_test: ./103_BinaryTreeZigzagLevelOrderTraversal/BinaryTreeZigzagLevelOrderTraversal_test.cc ./103_BinaryTreeZigzagLevelOrderTraversal/BinaryTreeZigzagLevelOrderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MaximumDepthOfBinaryTree_test: ./104_MaximumDepthOfBinaryTree/MaximumDepthOfBinaryTree_test.cc ./104_MaximumDepthOfBinaryTree/MaximumDepthOfBinaryTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ConstructBinaryTreeFromPreorderAndInorderTraversal_test: ./105_ConstructBinaryTreeFromPreorderAndInorderTraversal/ConstructBinaryTreeFromPreorderAndInorderTraversal_test.cc ./105_ConstructBinaryTreeFromPreorderAndInorderTraversal/ConstructBinaryTreeFromPreorderAndInorderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ConstructBinaryTreeFromInorderAndPostorderTraversal_test: ./106_ConstructBinaryTreeFromInorderAndPostorderTraversal/ConstructBinaryTreeFromInorderAndPostorderTraversal_test.cc ./106_ConstructBinaryTreeFromInorderAndPostorderTraversal/ConstructBinaryTreeFromInorderAndPostorderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreeLevelOrderTraversalII_test: ./107_BinaryTreeLevelOrderTraversalII/BinaryTreeLevelOrderTraversalII_test.cc ./107_BinaryTreeLevelOrderTraversalII/BinaryTreeLevelOrderTraversalII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ConvertSortedArrayToBinarySearchTree_test: ./108_ConvertSortedArrayToBinarySearchTree/ConvertSortedArrayToBinarySearchTree_test.cc ./108_ConvertSortedArrayToBinarySearchTree/ConvertSortedArrayToBinarySearchTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ConvertSortedListToBinarySearchTree_test: ./109_ConvertSortedListToBinarySearchTree/ConvertSortedListToBinarySearchTree_test.cc ./109_ConvertSortedListToBinarySearchTree/ConvertSortedListToBinarySearchTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BalancedBinaryTree_test: ./110_BalancedBinaryTree/BalancedBinaryTree_test.cc ./110_BalancedBinaryTree/BalancedBinaryTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MinimumDepthOfBinaryTree_test: ./111_MinimumDepthOfBinaryTree/MinimumDepthOfBinaryTree_test.cc ./111_MinimumDepthOfBinaryTree/MinimumDepthOfBinaryTree.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PathSum_test: ./112_PathSum/PathSum_test.cc ./112_PathSum/PathSum.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PathSumII_test: ./113_PathSumII/PathSumII_test.cc ./113_PathSumII/PathSumII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
FlattenBinaryTreeToLinkedList_test: ./114_FlattenBinaryTreeToLinkedList/FlattenBinaryTreeToLinkedList_test.cc ./114_FlattenBinaryTreeToLinkedList/FlattenBinaryTreeToLinkedList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
DistinctSubsequences_test: ./115_DistinctSubsequences/DistinctSubsequences_test.cc ./115_DistinctSubsequences/DistinctSubsequences.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PopulatingNextRightPointersInEachNode_test: ./116_PopulatingNextRightPointersInEachNode/PopulatingNextRightPointersInEachNode_test.cc ./116_PopulatingNextRightPointersInEachNode/PopulatingNextRightPointersInEachNode.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PopulatingNextRightPointersInEachNodeII_test: ./117_PopulatingNextRightPointersInEachNodeII/PopulatingNextRightPointersInEachNodeII_test.cc ./117_PopulatingNextRightPointersInEachNodeII/PopulatingNextRightPointersInEachNodeII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PascalsTriangle_test: ./118_PascalsTriangle/PascalsTriangle_test.cc ./118_PascalsTriangle/PascalsTriangle.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PascalsTriangleII_test: ./119_PascalsTriangleII/PascalsTriangleII_test.cc ./119_PascalsTriangleII/PascalsTriangleII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Triangle_test: ./120_Triangle/Triangle_test.cc ./120_Triangle/Triangle.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BestTimeToBuyAndSellStock_test: ./121_BestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock_test.cc ./121_BestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BestTimeToBuyAndSellStockII_test: ./122_BestTimeToBuyAndSellStockII/BestTimeToBuyAndSellStockII_test.cc ./122_BestTimeToBuyAndSellStockII/BestTimeToBuyAndSellStockII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BestTimeToBuyAndSellStockIII_test: ./123_BestTimeToBuyAndSellStockIII/BestTimeToBuyAndSellStockIII_test.cc ./123_BestTimeToBuyAndSellStockIII/BestTimeToBuyAndSellStockIII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreeMaximumPathSum_test: ./124_BinaryTreeMaximumPathSum/BinaryTreeMaximumPathSum_test.cc ./124_BinaryTreeMaximumPathSum/BinaryTreeMaximumPathSum.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ValidPalindrome_test: ./125_ValidPalindrome/ValidPalindrome_test.cc ./125_ValidPalindrome/ValidPalindrome.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
WordLadder_test: ./126_WordLadder/WordLadder_test.cc ./126_WordLadder/WordLadder.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
WordLadderII_test: ./127_WordLadderII/WordLadderII_test.cc ./127_WordLadderII/WordLadderII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LongestConsecutiveSequence_test: ./128_LongestConsecutiveSequence/LongestConsecutiveSequence_test.cc ./128_LongestConsecutiveSequence/LongestConsecutiveSequence.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SumRootToLeafNumbers_test: ./129_SumRootToLeafNumbers/SumRootToLeafNumbers_test.cc ./129_SumRootToLeafNumbers/SumRootToLeafNumbers.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SurroundedRegions_test: ./130_SurroundedRegions/SurroundedRegions_test.cc ./130_SurroundedRegions/SurroundedRegions.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PalindromePartitioning_test: ./131_PalindromePartitioning/PalindromePartitioning_test.cc ./131_PalindromePartitioning/PalindromePartitioning.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
PalindromePartitioningII_test: ./132_PalindromePartitioningII/PalindromePartitioningII_test.cc ./132_PalindromePartitioningII/PalindromePartitioningII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
CloneGraph_test: ./133_CloneGraph/CloneGraph_test.cc ./133_CloneGraph/CloneGraph.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
GasStation_test: ./134_GasStation/GasStation_test.cc ./134_GasStation/GasStation.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
Candy_test: ./135_Candy/Candy_test.cc ./135_Candy/Candy.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SingleNumber_test: ./136_SingleNumber/SingleNumber_test.cc ./136_SingleNumber/SingleNumber.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SingleNumberII_test: ./137_SingleNumberII/SingleNumberII_test.cc ./137_SingleNumberII/SingleNumberII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
CopyListWithRandomPointer_test: ./138_CopyListWithRandomPointer/CopyListWithRandomPointer_test.cc ./138_CopyListWithRandomPointer/CopyListWithRandomPointer.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
WordBreak_test: ./139_WordBreak/WordBreak_test.cc ./139_WordBreak/WordBreak.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
WordBreakII_test: ./140_WordBreakII/WordBreakII_test.c ./140_WordBreakII/WordBreakII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LinkedListCycle_test: ./141_LinkedListCycle/LinkedListCycle_test.cc ./141_LinkedListCycle/LinkedListCycle.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LinkedListCycleII_test: ./142_LinkedListCycleII/LinkedListCycleII_test.cc ./142_LinkedListCycleII/LinkedListCycleII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ReorderList_test: ./143_ReorderList/ReorderList_test.cc ./143_ReorderList/ReorderList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreePreorderTraversal_test: ./144_BinaryTreePreorderTraversal/BinaryTreePreorderTraversal_test.cc ./144_BinaryTreePreorderTraversal/BinaryTreePreorderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
BinaryTreePostorderTraversal_test: ./145_BinaryTreePostorderTraversal/BinaryTreePostorderTraversal_test.cc ./145_BinaryTreePostorderTraversal/BinaryTreePostorderTraversal.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
LRUCache_test: ./146_LRUCache/LRUCache_test.cc ./146_LRUCache/LRUCache.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
InsertionSortList_test: ./147_InsertionSortList/InsertionSortList_test.cc ./147_InsertionSortList/InsertionSortList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
SortList_test: ./148_SortList/SortList_test.cc ./148_SortList/SortList.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MaxPointsOnALine_test: ./149_MaxPointsOnALine/MaxPointsOnALine_test.cc ./149_MaxPointsOnALine/MaxPointsOnALine.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
EvaluateReversePolishNotation_test: ./150_EvaluateReversePolishNotation/EvaluateReversePolishNotation_test.cc ./150_EvaluateReversePolishNotation/EvaluateReversePolishNotation.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
ReverseWordsInAString_test: ./151_ReverseWordsInAString/ReverseWordsInAString_test.cc ./151_ReverseWordsInAString/ReverseWordsInAString.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
MaximumProductSubarray_test: ./152_MaximumProductSubarray/MaximumProductSubarray_test.cc ./152_MaximumProductSubarray/MaximumProductSubarray.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
FindMinimumInRotatedSortedArray_test: ./153_FindMinimumInRotatedSortedArray/FindMinimumInRotatedSortedArray_test.cc ./153_FindMinimumInRotatedSortedArray/FindMinimumInRotatedSortedArray.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
FindMinimumInRotatedSortedArrayII_test: ./154_FindMinimumInRotatedSortedArrayII/FindMinimumInRotatedSortedArrayII_test.cc ./154_FindMinimumInRotatedSortedArrayII/FindMinimumInRotatedSortedArrayII.o
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@

clean:
	rm -f */*.o *_test
