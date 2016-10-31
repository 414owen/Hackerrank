object Solution {
    def main(args: Array[String]) {
        val in = io.Source.stdin.getLines
        val Array(n, k) = in.next.split(" ").map(a => a.toInt)
        var arr = in.next.split(" ").map(a => a.toInt % k)
        var ans: Int = Math.min(arr.count(a => a == 0), 1)
        if (k % 2 == 0 && arr.count(_ == k/2) > 0) {
            arr = arr.filter(a => a != k/2)
            ans += 1
        }
        arr = arr.filter(a => a != 0)
        while (arr.length > 0) {
            val a = arr(0)
            val b = k - a
            ans += Math.max(arr.count(_ == a), arr.count(_ == b))
            arr = arr.filter(n => n != a && n != b)
        }
        println(ans)
    }
}
