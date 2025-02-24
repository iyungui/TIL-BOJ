import Foundation

func solution(_ arr1:[Int], _ arr2:[Int]) -> Int {
    if(arr1.count < arr2.count) { return -1 }
    if(arr1.count > arr2.count) { return 1 }
    
    let sum1: Int = arr1.reduce(0, +)
    let sum2: Int = arr2.reduce(0, +)
    if(sum1 == sum2) { return 0 }
    return sum1 > sum2 ? 1 : -1
}