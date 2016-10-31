object Solution {
    def main(args: Array[String]) {
        var ans = 0
        var lastSeen = 5
        (0 until scala.io.Source.stdin.getLines.next.toInt).foreach(d => {
            ans += lastSeen  / 2
            lastSeen = (lastSeen/ 2) * 3
        })
        println(ans)
    }
}
