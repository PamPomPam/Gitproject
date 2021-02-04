#pragma once
#include <cstdint>
#ifdef _MSC_VER
#include <intrin.h>
#endif

namespace lczero {



template <typename T>
class BitIterator {
	public:
		Bititerator(std::uint64_t value) : value_(value) {};
		bool operator!= ( const BitIterator& other) { return value_ != other.value_; }
		void operator++ () { value_ &= (value_ -1) };

		T operator*() const { return GetLowestBit(value_); }
	
	private:
		std::uint64_t value_;
};


};

