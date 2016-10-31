object Solution {
    def main(args: Array[String]) {
        val in = scala.io.Source.stdin.getLines
        val lines = in.next.toInt
        for (_ <- 0 to lines) {
            val Array(a, b) = in.next.split(" ").map(a => a.toLong)
            def andans(c: Long, d: Long, acc: Long): Long = {
                if (acc == 0 || c > d) acc
                else andans(c + 1, d, acc & c)
            }
            val ans: Long = andans(a, b, ~(0L))
            println(ans)
        }
    }
}
