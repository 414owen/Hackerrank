object Solution {
    def main(args: Array[String]) {
        val in = scala.io.Source.stdin.getLines
        in.next
        var socks = in.next.split(" ").map(a => a.toInt)
        var ans = 0
        while (socks.length > 0) {
            val currSock = socks(0)
            ans += socks.count(_ == currSock) / 2
            socks = socks.filter(s => s != currSock)
        }
        println(ans)
    }
}
