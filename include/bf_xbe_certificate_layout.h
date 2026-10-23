/* Xbox original 32-bit XBE certificate field layout, inspected on the
 * original game XBE (SHA-256 pinned in tools/verify_x86_c11_lane_contracts.py).
 * Prefix is only the verified fields used in recovered functions.
 * NOTE: actual header size in input is 0x1ec; prefix here ends at 0x1dc.
 * It is NOT a host CRT structure and contains NO embedded game keys/assets.
 * Original 0x002F26FC-0x002F2718 reads the certificate guest address
 * dynamically through [0x00010118], then TitleID from [cert + 8].
 * DO NOT use the static 0x00010180 label as a native Windows pointer.
 */
#ifndef BF_XBE_CERTIFICATE_LAYOUT_H
#define BF_XBE_CERTIFICATE_LAYOUT_H
#include <stdint.h>
#include <stddef.h>
typedef struct BF_XBE_CertificatePrefix {
    uint32_t SizeOfHeader;
    uint32_t TimeDateStamp;
    uint32_t TitleID;
    uint16_t TitleName[40];
    uint32_t AlternateTitleID[16];
    uint32_t AllowedMedia;
    uint32_t GameRegion;
    uint32_t GameRatings;
    uint32_t DiskNumber;
    uint32_t Version;
    uint8_t LANKey[16];
    uint8_t SignatureKey[16];
    uint8_t AlternateSignatureKeys[16][16];
    uint32_t OriginalSize;
    uint32_t OnlineServiceID;
    uint32_t SecurityFlags;
} BF_XBE_CertificatePrefix;
#define BF_CERT_ASSERT(field,offset) _Static_assert(offsetof(BF_XBE_CertificatePrefix, field) == (offset), "Xbox certificate field offset mismatch: " #field)
BF_CERT_ASSERT(SizeOfHeader, 0x00);
BF_CERT_ASSERT(TimeDateStamp, 0x04);
BF_CERT_ASSERT(TitleID, 0x08);
BF_CERT_ASSERT(AllowedMedia, 0x9c);
BF_CERT_ASSERT(GameRegion, 0xa0);
BF_CERT_ASSERT(GameRatings, 0xa4);
BF_CERT_ASSERT(Version, 0xac);
BF_CERT_ASSERT(LANKey, 0xb0);
BF_CERT_ASSERT(OnlineServiceID, 0x1d4);
BF_CERT_ASSERT(SecurityFlags, 0x1d8);
_Static_assert(sizeof(BF_XBE_CertificatePrefix) == 0x1dc, "Xbox certificate verified prefix must occupy 0x1dc bytes");
#undef BF_CERT_ASSERT

/* Native guest32 adapter NOT IMPLEMENTED. Original code reads a pointer
 * from the original XBE header slot 0x00010118. This declaration intentionally
 * remains an unresolved native linker dependency until guest memory and
 * its 32-bit pointer relocation are verified; it must not return a fabricated
 * certificate or directly reinterpret 0x00010180 as a Windows address. */
BF_XBE_CertificatePrefix *bf_xbe_certificate_guest_pointer(void);
#define XBE_CERTIFICATE_HEADER_00010180 (*bf_xbe_certificate_guest_pointer())
#endif
