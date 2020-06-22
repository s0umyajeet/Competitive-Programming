import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt()
        var arr = ArrayList<Int>()
        while (t-- > 0) {
                var input = sc.nextInt()
                arr.add(input)
        }
        arr.sort()
        print(arr.joinToString(separator = "\n"))
}
                