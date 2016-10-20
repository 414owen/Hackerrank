object Solution {
    def main(args: Array[String]) {
        val lines = io.Source.stdin.getLines
		lines.next
        for (i <- lines) {
            val all = i.split(" ").map(s => s.toInt)
            println((2 * all(2) - all(0)) + " " + (2 * all(3) - all(1)))
        }
    }
}
