import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var n = sc.nextInt()
        var k = sc.nextInt()
        var count = 0;
        while (n-- > 0) {
                var input = sc.nextInt()
                if (input % k == 0) 
                        count++
        }
        println(count)
}