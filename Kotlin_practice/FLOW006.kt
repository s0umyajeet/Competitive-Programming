import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt()
        while (t-- > 0) {
                var n = sc.nextInt()
                var sum = 0
                while (n > 0) {
                        sum += n % 10
                        n /= 10
                }
                println(sum)
        }
}
