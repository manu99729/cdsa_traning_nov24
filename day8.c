public class Main {
    public static void main(String[] args) {
        int[] num = {1, 2, 3, 4, 5};
        int result = linearSearch(num,  5);
        if (result == -1) {
            System.out.println("Not Found");
        } else {
            System.out.println("index:" + result);
        }
    }

    public static int linearSearch(int[] array, int target) {
        int len = array. length;
        for (int i = 0; i < len; i++) {
            if (array[i] == target) {
                return i;
            }
        }return -1;
    }
}