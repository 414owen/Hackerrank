object Solution {
    def main(args: Array[String]) {
        val in = scala.io.Source.stdin.getLines
        val alin: Array[Int] = in.next.split(" ").map(a => a.toInt)
        val bobin: Array[Int] = in.next.split(" ").map(a => a.toInt)
        var al = 0
        var bob = 0
        (0 until 3).foreach(i => {
            val als = alin(i)
            val bobs = bobin(i)
            if (als > bobs) {
                al += 1
            } else if (bobs > als) {
                bob += 1
            }
        })
        println(al + " " + bob)
    }
}

