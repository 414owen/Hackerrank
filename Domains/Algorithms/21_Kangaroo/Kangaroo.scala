object Solution {
    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in)
        val IndexedSeq(x1, v1, x2, v2) = (0 until 4).map(_ => sc.nextInt())
        /*
            x1 + v1(t) = x2 + v2(t)
            v1(t) - v2(t) = x2 - x1
            t(v1 - v2) = x2 - x1
            t = (x2 - x1) / (v1 - v2)
        */
        val t = (x2.toDouble - x1) / (v1 - v2)
        println(if (t < 1 || t != Math.floor(t) || t.isInfinite) "NO" else "YES")
    }
}

