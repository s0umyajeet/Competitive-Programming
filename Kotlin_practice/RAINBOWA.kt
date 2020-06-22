import java.util.*

fun main(args: Array<String>) {
        val sc = Scanner(System.`in`)
        var t = sc.nextInt()

        while (t-- > 0) {
                var n = sc.nextInt()
                var v = ArrayList<Int>(n)

                var N = n
                var visited = Array<Int>(7, {_ -> 0})

                for (i in 0..n - 1) {
                        var input = sc.nextInt()
                        v.add(input)
                        visited[input] = 1
                }


                for (i in visited.indices) {
                        print("" + v[i] + " ")
                }
        //         while (N-- > 0) {
        //                 var input = sc.nextInt()
        //                 v.add(input)
        //                 visited[input] = 1
        //         }

        //         var error = 0
        //         for (i in 0 until n) {
        //                 if (visited[i] != 1) {
        //                         error = 1
        //                         break
        //                 }
        //         }

        //         if (error == 0) {
        //                 var forward = 0
        //                 var back = n - 1
        //                 N = n

        //                 while (N-- > 0) {
        //                         if (v[forward] != v[back]) {
        //                                 error = 1
        //                                 break;
        //                         }
        //                         forward++;
        //                         back--;
        //                 }
        //         }

        //         if (error == 0) println("yes")
        //         else println("no")
        // }
        }
}