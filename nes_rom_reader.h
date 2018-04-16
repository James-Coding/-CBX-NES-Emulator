#ifndef NES_ROM_READER_H_INCLUDED
#define NES_ROM_READER_H_INCLUDED
#include <vector>
#include <string>
#include <cstdint>

namespace sn
{
unsigned char fpath;
class RomLoadThread
{
public:
    Rom();
    bool fileromload(std::string fpath)
    const std::vector<Byte>& getROM();
    const std::vector<Byte>& getVROM();
    Byte getMapper();
    Byte getNameTableMirroring;
    bool hasExtendedRam();
private:
    std::vector<Byte> m_PRG_ROM;
    std::vector<Byte> m_CHR_ROM;
    Byte m_nameTableMirroring;
    Byte m_mapperNumber;
    bool m_extendedRAM;
    bool m_chrRAM;
};
};
}



#endif // NES_ROM_READER_H_INCLUDED
