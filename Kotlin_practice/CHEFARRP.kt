import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt() 
        while (t-- > 0) {
                var n = sc.nextInt()
                var arr = ArrayList<Int>()
                var N = n

                while (N-- > 0) {
                        var input = sc.nextInt()
                        arr.add(input)
                }

                
                var ans = 0;
                for (i in 0 until n) {
                        for (j in i until n) {
                                var sum = 0
                                var prod = 1
                                for (k in j until n) {
                                        sum += arr[k]
                                        prod *= arr[k]
                                        // print("" + arr[k] + " ")
                                }
                                if (sum == prod) ans++;
                                // println()
                        }
                }
                println(ans)
        }
}