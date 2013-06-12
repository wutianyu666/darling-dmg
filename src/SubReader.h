#ifndef SUBREADER_H
#define SUBREADER_H
#include "Reader.h"
#include <stdint.h>

class SubReader : public Reader
{
public:
	SubReader(Reader* parent, uint64_t offset, uint64_t size);
	
	int32_t read(void* buf, int32_t count, uint64_t offset) override;
	uint64_t length() override;
private:
	Reader* m_parent;
	uint64_t m_offset, m_size;
};

#endif