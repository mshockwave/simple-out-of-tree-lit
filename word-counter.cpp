#include <fstream>
#include <iostream>
#include <map>
#include <string>

void countWords(std::istream &IS, std::map<std::string, unsigned> &Counters) {
  std::string Word;
  while (IS >> Word) {
    if (Counters.count(Word))
      Counters[Word] += 1U;
    else
      Counters.emplace(Word, 1U);
  }
}

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <input file>\n";
    return 1;
  }

  std::ifstream IFS(argv[1]);
  if (!IFS) {
    std::cerr << "Failed to open " << argv[1] << "\n";
    return 1;
  }

  std::map<std::string, unsigned> Counters;
  countWords(IFS, Counters);

  for (const auto &Entry : Counters) {
    std::cout << Entry.first << ": " << Entry.second << "\n";
  }

  return 0;
}
