import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt()

        while (t-- > 0) {
                var n = sc.nextInt()
                var arr = ArrayList<Int>()

                var input = 0
                for (i in 1..n) {
                        input = sc.nextInt()
                        arr.add(input)
                }
                arr.sort()
                var sum = arr[0] + arr[1]
                println("" + sum + " ")
        }
}