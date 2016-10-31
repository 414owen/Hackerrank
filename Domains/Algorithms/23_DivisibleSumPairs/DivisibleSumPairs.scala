object Solution {
    def main(args: Array[String]) {
        val in = scala.io.Source.stdin.getLines
        val Array(n, k) = in.next.split(" ").map(a => a.toInt)
        val arr = in.next.split(" ").map(a => a.toInt)
        val ans = (0 until arr.length).foldLeft(0)((acc, ai) => 
            acc + (ai + 1 until arr.length).count(aj => 
                (arr(ai) + arr(aj)) % k == 0
            )
        )
        println(ans)
    }
}

