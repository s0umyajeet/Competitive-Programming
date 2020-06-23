import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var s: String = sc.next()

        var f = 0;
        var b = s.length - 1

        var degree = 0
        while (f <= b) {
                if (s[f] == s[b]) 
                        degree++
                f++ 
                b--
        }
        println(degree)
}