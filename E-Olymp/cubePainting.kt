import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt()

        while (t-- > 0) {
                var cubes = sc.nextInt()
                var ans = 0
                for (i in 1..cubes) {
                        var cube = sc.nextInt()
                        var colon = sc.next()
                        var count = 0
                        var input = 0
                        while (input != 0) {
                                input = sc.nextInt()
                                count++
                        }
                        count--
                        ans += (6 - count)
                }
                println(ans)
        }
}