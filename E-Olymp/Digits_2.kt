import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var num = sc.nextLong()
        var digits = 0
        while (num > 0) {
                num /= 10
                digits++
        }
        println(digits)
}