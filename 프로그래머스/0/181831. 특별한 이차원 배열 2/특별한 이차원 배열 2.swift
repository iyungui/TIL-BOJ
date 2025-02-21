import Foundation

func solution(_ arr:[[Int]]) -> Int {
    let n: Int = arr.count
    for i in 0..<n {
        for j in 0..<n {
            if(arr[i][j] != arr[j][i]) {
                return 0
            }
        }
    }
    return 1
}