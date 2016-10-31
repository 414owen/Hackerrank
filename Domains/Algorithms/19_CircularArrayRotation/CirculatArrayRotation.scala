object Solution {
    def main(args: Array[String]) {
        val in = scala.io.Source.stdin.getLines
        val Array(n,k,q) = in.next.split(" ").map(a => a.toInt)
        var a = in.next.split(" ").map(a => a.toInt)
        for (l <- in) {
            val ind = l.toInt
            val newInd = (ind - k) % n
            val ans: Int = a(if (newInd < 0) n + newInd else newInd)
            println(ans)
        }
    }
}
