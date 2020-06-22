import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt()
        for (i in 1..t) {
                var x = sc.nextInt()
                var y = sc.nextInt()
                if (x <= y) println(0)
                else println(x - y)
        }
}
