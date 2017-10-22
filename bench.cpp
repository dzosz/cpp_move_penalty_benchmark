#include "mylib.hpp"
#include <benchmark/benchmark.h>

// Explicitly moved ----------------------------------
static void Strings_moved(benchmark::State& state)
{
    for (auto _ : state)
        Strings a = std::move(moved::get_Strings());
}

static void CArrays_moved(benchmark::State& state)
{
    for (auto _ : state)
        CArrays a = std::move(moved::get_CArrays());
}
static void PODs_moved(benchmark::State& state)
{
    for (auto _ : state)
        PODs a = std::move(moved::get_PODs());
}
static void Mixed_moved(benchmark::State& state)
{
    for (auto _ : state)
        Mixed a = std::move(moved::get_Mixed());
}
// Raw ----------------------------------------------
static void Strings_raw(benchmark::State& state)
{
    for (auto _ : state)
        Strings a = raw::get_Strings();
}

static void CArrays_raw(benchmark::State& state)
{
    for (auto _ : state)
        CArrays a = raw::get_CArrays();
}
static void PODs_raw(benchmark::State& state)
{
    for (auto _ : state)
        PODs a = raw::get_PODs();
}
static void Mixed_raw(benchmark::State& state)
{
    for (auto _ : state)
        Mixed a = raw::get_Mixed();
}
// Register the function as a benchmark
// warming up if cpu scaling is enabled
BENCHMARK(Strings_moved); 

// left for compiler
BENCHMARK(Strings_raw);
BENCHMARK(PODs_raw);
BENCHMARK(CArrays_raw);
BENCHMARK(Mixed_raw);

// explicitly moved
BENCHMARK(Strings_moved);
BENCHMARK(PODs_moved);
BENCHMARK(CArrays_moved);
BENCHMARK(Mixed_moved);

// Define another benchmark
BENCHMARK_MAIN();

