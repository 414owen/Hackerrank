object Solution {
    def main(args: Array[String]) {
        val sc = new java.util.Scanner (System.in);
        var n = sc.nextInt();
        var m = sc.nextInt();
        var a = new Array[Int](n);
        for(a_i <- 0 to n-1) {
           a(a_i) = sc.nextInt();
        }
        var b = new Array[Int](m);
        for(b_i <- 0 to m-1) {
           b(b_i) = sc.nextInt();
        }
        var result = 0
        (1 to 100).foreach(i => {
            var ans = true
            a.takeWhile(_ => ans).foreach(ael => {
                if (i % ael != 0) {ans = false}
            })
            b.takeWhile(_ => ans).foreach(bel => {
                if (bel % i != 0) {ans = false}
            })
            if (ans) {
                result = result + 1
            }
        })
        println(result)
    }
}

