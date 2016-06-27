//https://www.hackerrank.com/contests/code-cpp-4/challenges/exceptional-server

    try {
        auto result = Server::compute(A, B);
        cout << result << '\n';
    } catch(bad_alloc& e) {
        cout << "Not enough memory" << '\n';
    } catch(exception& e) {
        cout << "Exception: " << e.what() << '\n';
    } catch(...) {
        cout << "Other Exception\n";
    }