object Solution {
    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        val IndexedSeq(s,t,a,b,m,n) = (0 until 6).map(_ => sc.nextInt())
        var apples = (0 until m).foldLeft(0)((acc, _) => {
            val n = sc.nextInt
            if (a + n >= s && a + n <= t) acc + 1
            else acc
        })
        var oranges = (0 until n).foldLeft(0)((acc, _) => {
            val n = sc.nextInt
            if (b + n >= s && b + n <= t) acc + 1
            else acc
        })
        println(apples)
        println(oranges)
    }
}
