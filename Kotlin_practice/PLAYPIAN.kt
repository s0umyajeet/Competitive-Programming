import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt() 
        while (t-- > 0) {
                var s = sc.next()
                var flag = 0
                for (i in s.indices step 2) {
                        if (s[i] == s[i + 1]) {
                                println("no")
                                flag = 1
                                break
                        }
                }
                if (flag != 1) println("yes")
        }
}
