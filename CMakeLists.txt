cmake_minimum_required(VERSION 4.1)
project(Coding)

set(CMAKE_CXX_STANDARD 20)

add_executable(Coding main.cpp
        Basics/HelloWorld.cpp
        Arrays/LinearSearch1.cpp
        Arrays/LinearSearch2.cpp
        Arrays/TwoSumProblem.cpp
        Arrays/TwoSumProblemUsingMap.cpp
        Basics/SumOfTwoNumbers.cpp
        Basics/MultiplicationOfTwoNumbers.cpp
        Loops/VotingEligibility.cpp
        Loops/OddEvenCheck.cpp
        Loops/GradingStudentsMarks.cpp
        Loops/LowercaseOrUppercaseLetterCheck.cpp
        Loops/PrintNumbersFrom1toN.cpp
        Loops/SumOfNumbersFrom1toN.cpp
        Loops/SumOfOddNumbers.cpp
        Loops/SumOfEvenNumbers.cpp
        Loops/SumOfOddNumbersUsingWhileloop.cpp
        Loops/HelloWorldUsingDoWhileLoop.cpp
        Loops/PrimeNumber.cpp
        Patterns/5StarsIn5Lines.cpp
        Patterns/mStarsInaline.cpp
        Patterns/MStarsinNLines.cpp
        Loops/FactorialOfaNumber.cpp
        Patterns/print1234in4lines.cpp
        Patterns/PrintABCDin4Lines.cpp
        "Patterns/ContinousNumberSquarePattern.cpp"
        Patterns/ContinousAlphabetSquarePattern.cpp
        Patterns/RightTriangleStarPattern..cpp
        Patterns/RepeatedNumberRightTriangle.cpp
        Patterns/RepeatedAlphabetRightTriangle.cpp
        "Patterns/Number Half Pyramid Pattern (Increasing Numbers).cpp"
        "Patterns/Reverse Number Triangle Pattern..cpp"
        Patterns/FloydsTriangle.cpp
        Patterns/AlphabetsFloydsTriangle.cpp
        "Patterns/Reverse Half Pyramid with Numbers.cpp"
        Patterns/InvertedTrianglePattern.cpp
        "Patterns/Palindrome Pyramid Pattern.cpp"
        Patterns/HollowCylinderPatterns.cpp
        Functions/HelloFunctions.cpp
        Functions/SumOfTwoNumbers.cpp
        Functions/SumOfNumbersFrom1toN.cpp
        Functions/Factorial.cpp
        Functions/SumOfDigits.cpp
        Functions/BinomialCoefficientforNandR.cpp
        Functions/PrimeNumbers.cpp
        Functions/PrimeNumbersFrom2toN.cpp
        Functions/Nthfibonacci.cpp
        Functions/SieveOfEratosthenes.cpp
        "Functions/Fibonacci Series.cpp"
        Functions/DayofWeekUsingSwitchFunc..cpp
        Functions/CalculatorUsingSwitchFunc.cpp
        "Functions/Roman to Integer using switch.cpp"
        "Functions/FizzBuzz problem.cpp"
        Functions/DecimalToBinary.cpp
        Functions/BinaryToDecimal.cpp
        "Functions/DecimalToBinary using XOR.cpp"
        "Functions/checking if a num is power of 2.cpp"
        Functions/ReverseInteger.cpp
        Arrays/IndexingOfanArray.cpp
        "Arrays/Updating an Elt of Array.cpp"
        Arrays/SizeOfArray.cpp
        Arrays/IterationInArray.cpp
        "Arrays/InputandOutput in Array.cpp"
        Arrays/SmallestNumInArray.cpp
        Arrays/IndexOfSmallestElement.cpp
        Arrays/LargestElementInArray.cpp
        "Arrays/Doubling Each Element Of Array.cpp"
        "Arrays/Doubling Each Elemnt of an Array using functions.cpp"
        "Arrays/Insertion In Array.cpp"
        Arrays/SumOfElements.cpp
        "Arrays/Removing Element From Array.cpp"
        "Arrays/Finding Target Element.cpp"
        "Arrays/Reversing Array using 2 pointer approach.cpp"
        "Arrays/Product of Elements of Array.cpp"
        "Arrays/Sum and product of array.cpp"
        "Arrays/Swap Larges and Smallest number of an Array.cpp"
        "Arrays/Print all the Duplicate values in an array.cpp"
        "Arrays/Print all the unique values in array.cpp"
        "Arrays/Intersection of two Arrays.cpp"
        "Vector/Accessing_element_of_a_vector.cpp"
        "Vector/Finding size of a vector using size function .cpp"
        "Loops/Accessing the element of array  using for each loop.cpp"
        "Loops/Doubling each element of the array using for-each loop.cpp"
        "Vector/Using push_back function.cpp"
        "Vector/Using pop_back function .cpp"
        "Vector/Accessing element of vector using at function.cpp"
        "Vector/Vector traversal.cpp"
        "Vector/Using capacity function.cpp"
        "Vector/Single Number Leetcdoe 136 BruteForce Approach.cpp"
        "Vector/Single Number Best Approach.cpp"
        "Vector/Linear Search using vector.cpp"
        "Vector/Reversing an Array using Vector.cpp"
        "Vector/Print subarray of the array.cpp"
        "Vector/Print Maximum Subarray Sum.cpp"
        "Arrays/Two sum problem Using two pointer method.cpp"
        "Vector/Majority Element Brute force method.cpp"
        "Vector/Majority element Optimized Method.cpp"
        "Vector/MajorityElementUsingMooresVotingAlgo.cpp"
        "Graphs/AdjacencyList.cpp"
        "Graphs/BuildingGraph.cpp"
        "Graphs/BFSTraversal.cpp"
        "Graphs/BFSTraversalTakingInputFromTheGraph.cpp"
        "Graphs/DFSTraversal.cpp"
        "BinarySearch/BinarySearch.cpp"
        "Graphs/DFSTraversalUsinClass.cpp"
        "Graphs/CycleDetectionInUndirectedGraphUsingDFS.cpp"
        "Arrays/Lc-167. Two Sum II - Input Array Is Sorted.cpp"
        "Arrays/3sumproblemLC15.cpp"
        Graphs/NumberOfProvinces.cpp
        "Graphs/CycleDetectionBFS.cpp"
        Graphs/AdjacencyMatrix.cpp
        Graphs/countConnectedComponentsDFS.cpp
        Graphs/countConnectedComponentsBFS.cpp
        Arrays/TrappingRainWaterProblemLC42.cpp
)
