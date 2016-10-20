object Solution {
	def main(arga: Array[String]) : Unit = {
		val lines = io.Source.stdin.getLines
		lines.next
		for (line <- lines) {
			println((0 until line.toInt).sum)
		}
	}
}
