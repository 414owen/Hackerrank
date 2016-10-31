object Solution {
    def main(args: Array[String]) {
        val in = io.Source.stdin.getLines
        in.next
        var ans = 0
        val clouds = in.next.split(" ").map(a => a == "1")
        var cloud = 0
        while (cloud < clouds.length - 1) {
            if (cloud < clouds.length - 2) {
                cloud += (if (clouds(cloud + 2)) 1 else 2)
            } else if (cloud < clouds.length - 1) {
                cloud += 1
            }
            ans += 1
        }
        println(ans)
    }
}
