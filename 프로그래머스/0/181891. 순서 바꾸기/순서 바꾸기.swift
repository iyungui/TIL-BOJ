import Foundation

func solution(_ num_list:[Int], _ n:Int) -> [Int] {
    return Array(num_list[n..<num_list.count]) + Array(num_list.prefix(n))
}