object Solution {
    def main(args: Array[String]) {
        val in = io.Source.stdin.getLines
        var s = in.next();
        var n = in.next().toLong;
        println(s.count(_ == 'a') * (n / s.length) + s.slice(0, (n % s.length).toInt).count(_ == 'a'))
    }
}

