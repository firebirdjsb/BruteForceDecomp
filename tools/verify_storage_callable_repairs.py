#!/usr/bin/env python3
"""Verify original-XBE evidence for storage and callable-pointer C11 repairs.

Reads the original user-owned XBE only. Does not execute it, write game data,
establish a host ABI, or prove that the reconstructed C behaves 1:1.
"""
import argparse
import hashlib
import struct
from pathlib import Path

XBE_SHA256 = "B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721"
# Entry, exact Ghidra body ranges (VA/byte count), original concatenated SHA-256.
FUNCTIONS = (
    (0x00059000, ((364544, 1158), (365705, 12)),
     "1B4232635402379CA38E5B876724439374DC2414CEF275C1D5CB9291421BAF4C"),
    (0x00068020, ((426016, 334),),
     "589C0FE1694997F490D05EE5AE5166845F45A7F0398D39E48A1C955045EFF046"),
    (0x00095070, ((610416, 744),),
     "FDA388C575B57AF53F0B5F0D5E0DC34705773284991EE5D4609A96642AEBBFDC"),
    (0x000c70a0, ((815264, 511),),
     "46759E850C90FE2023426FD4D235109A6C709B65643772C17CFC719A343BAC88"),
    (0x000d2040, ((860224, 505),),
     "DC9169662DD8E30CB996C5CF6BAE6FCE2EA673A59C5C7FE30E2C9D370E7F1D36"),
    (0x000d56c0, ((874176, 2025), (876204, 150), (876357, 15)),
     "CFA6275208CB7227F6BE7C63F0F8AA01416A7E7B572F411F98EC8B8F05C9CB8B"),
    (0x000d61a0, ((876960, 752),),
     "B26180EF29604C2FAFE2E7EFF00F0FC85D9AF57B6BFAB771F25811343ED4E416"),
    (0x000d6520, ((877856, 102), (877971, 144), (878118, 177), (878298, 129), (878430, 506), (878939, 10)),
     "ED1A2B8FD661AD8C470036BBF1B009D6B49A5026EEB24D3A48FCD4FCE0C2CB94"),
    (0x000d7d80, ((884096, 90), (884192, 823), (885018, 14), (885035, 8)),
     "B22EEF96E313F11BD2AC8ADE4308FD278F2154E538B9D99FA88AD89A3DBBFF1A"),
    (0x000ea6c0, ((960192, 1728),),
     "272AF2618E95B4F997AA72A4F2BC3BA0B3D4B2B19C4BA5B93EFAE4871989B6F9"),
    (0x000f0870, ((985200, 198), (985401, 8)),
     "09BA31009452771BB05D2D273FE21E8DA9F213C67C8EBEDEABDC7743CC969B61"),
    (0x000f3140, ((995648, 142), (995793, 10)),
     "C0E0EF8EDFF5F286B0A35CC499DF4028EF8342A8E099437CC0DE33C7A06D5810"),
    (0x000f8480, ((1016960, 180), (1017143, 8)),
     "39BA3A46C69E96E371EE41F2C2299FC0F54B67E24FE19F16191843984C099F71"),
    (0x000f8540, ((1017152, 180), (1017335, 8)),
     "3BEEC34C248CE4F213726D34BC2B285BA643B4416EC5F9308E98FCF68363CDD0"),
    (0x00127290, ((1208976, 589), (1209568, 758), (1210336, 217), (1210556, 905), (1211464, 10)),
     "2C6A17065DAFF5BF5577BB3B0CF183C6F146EA74F8EEFBA2059770C95BB7FF0F"),
    (0x0012bc60, ((1227872, 735),),
     "9CFBBB2A80C2D1E9FDE171065237046977573FDE18BF1EDBFE3407120D9B88FF"),
    (0x0012c020, ((1228832, 1681),),
     "5B3451680A378DA659D12A50DCEE849E672E7354B00C352995A27B753BA51A3A"),
    (0x0017f700, ((1570560, 293),),
     "1D14A277E496D3DB79FC4DE20DD685D8C833E6B80DBC7B47CFA5E6123475E633"),
    (0x001e1550, ((1971536, 121), (1971660, 86), (1971751, 196), (1971950, 17)),
     "BA02938D84C07163A7BC50005B56481EB762BFD19BF491EC616D9D5090283CA6"),
    (0x001e1a40, ((1972800, 96),),
     "7BA963C3D8EB6F83B505EBE0641A98BB6A42DED0B78555147B3F21BF310C81DE"),
    (0x001e1f40, ((1973040, 164), (1973207, 48), (1973264, 173), (1973440, 49), (1973492, 8), (1973696, 170), (1973869, 48), (1973920, 134), (1974057, 8), (1974080, 144)),
     "5DDE41611CF58912127F7EBB5DA80F5736EC6C8F424E8FA79DFE8DD9FD5992F3"),
    (0x001e4df0, ((1986032, 63),),
     "7206A2263732F480B2F0B9BA571D568CACE41B6EE84D7B2C2E156C58A22D8B60"),
    (0x00212430, ((2171952, 685),),
     "0F897A7393CF94B9D03F1F4EC75B990F7D361EDC87A74B250D3114BDAB429FE5"),
    (0x00219520, ((2200864, 251), (2201118, 222), (2201343, 43)),
     "5283028742DED6107C9F537468336862476DC2AD59CFBE522D463C6273114F20"),
    (0x00239d50, ((2334032, 20),),
     "40F94060C70A41AF75E65FBEF5884DAA5DE22AE5245D445284D5E42E5A065EC2"),
    (0x0025e3c0, ((2483136, 304),),
     "8EF17BD03C70BE2CC91E9A9851B32DD34430C0AEF4EF1E722F82D05CEDC08457"),
    (0x002a5720, ((2774816, 56),),
     "25111D53D2A7369293DB702900A8E308D837578AC8ECB7766C48274549F5B95C"),
    (0x002a5760, ((2774880, 86),),
     "AD9F380CD2722D4FE4EC1D6036C861C66656E28B8C00E352315FE4DD2CBFA0CB"),
    (0x002b6500, ((2843904, 152),),
     "4DA4F3748F3EC3DA37B178462B78C7CA09ED2C655319DD40D6A81BB9122592F0"),
    (0x002b65a0, ((2844064, 145),),
     "56854F87AF82B0B8E08A44E207A2E58F986F8AABF682B977260B6DE0EFE031B4"),
    (0x002be4c0, ((2876608, 426), (2877040, 237), (2877286, 170)),
     "57C6A5263FE953A8CE836F21329EEF22AC359F44AC8EC575A21FDF6AE3C76876"),
    (0x002c2fc0, ((2895808, 1895),),
     "24C8D8456BD556F0E2801B190F61956E805ED90214C60FC32E216492F71D0410"),
    (0x002e45a0, ((3032480, 88),),
     "6EDFD44129C571271E7B2920856A6CBD9B37C050CDE7865F93D595EB19CF30C8"),
    (0x002e46b0, ((3032752, 181),),
     "89FAABA8B3D022963FC95BF5CC8BA003B8F4617726665AC6FF454AAD9664A98A"),
    (0x002e4770, ((3032944, 198),),
     "A581455A92E6DE7B8EA688AB0CAA76EBF37B81356D76E562D41DC6EBE697EDB6"),
    (0x002ec3f5, ((3064821, 34),),
     "C22F4BF9DF9E1DD7F75BE9DD28302D097AA20888298B81AB5DEA2E66570F6E07"),
    (0x002f21ca, ((3088842, 118),),
     "E62698BDE1D3D98A2A6300D3BE526D8A386D38776BBE111D858D1E28D5538154"),
    (0x002f8e00, ((3116544, 106),),
     "286F723373E19B1F7E76D31EEB66DEF024A4BC3581943F4687DA1D3E53A4B589"),
    (0x002ff1ee, ((3142126, 29), (3142162, 16)),
     "71DE13F3498F6AFC67A6C25CC38B0148834D8C911B9A6AAFC0A2533F08F4B5CC"),
    (0x002ff29c, ((3142300, 70),),
     "BB0AEA9D7F97CAA4C90BE5E5A651039FA357CF343E4CE6409C2AF41BE9E3AD73"),
    (0x00314e06, ((3231238, 18),),
     "AE0C0E6B1ACE2E1E4D6D6479B08147649A4DAEC463E53D373BAAB83BBA72EA79"),
    (0x0031841f, ((3245087, 380),),
     "E52B6740338B298A877BCE5EFC0CB77A1EB0CA81CF6BECC6656E050EE0265767"),
    (0x00319c62, ((3251298, 119),),
     "8957AE2A51444F6708CF981C5F111BF116E1E4CAC3545CA2F2839FFEE67893D1"),
    (0x00319e80, ((3251840, 93),),
     "8121C9FDA6B1F0BD8883BC65084C04B68104D8F04FF646E2FDB6E7487F573073"),
    (0x00319edd, ((3251933, 171),),
     "713BED9284F771077E619692AEBEEFE82BF400D4D44BBAF1BA280E05D26496F3"),
    (0x00356e20, ((3501600, 74),),
     "C6491DC14C76A00FC2FE20E398DD9745CEE1E79F12D1A625CB0FBD64C796BD24"),
    (0x003574b0, ((3503280, 3885), (3507168, 26)),
     "D22831356CDF0BF9FA390EC47B3211D3F424C9DFDF0D0DC895638771ACD9A6F9"),
    (0x0035a590, ((3515792, 80),),
     "C3F830CC067836E86A5D1F5400BBBD36F931481E753EC1F39829BBE2B044DD53"),
    (0x003603c0, ((3539904, 1065),),
     "F8BF10BED32C599940651A803FC6530510D98A11152FBB40BF14F4D25FA12635"),
    (0x003607f0, ((3540976, 781), (3541760, 1364)),
     "F649FFBCFD3010D4045134DC481258191FEE4315C370683384B62B1F9E8602B1"),
)
# Focused original instruction windows; never complete proprietary bodies.
OPCODES = (
    (0x00068033, "0faf0d88fb3f00"),
    (0x00068051, "0faf0594fb3f00"),
    (0x00068073, "0faf05a4fb3f00"),
    (0x00068094, "0faf05b4fb3f00"),
    (0x000680b5, "0faf05c4fb3f00"),
    (0x000680d6, "0faf05d4fb3f00"),
    (0x000680f7, "0faf05e4fb3f00"),
    (0x00068118, "0faf05f4fb3f00"),
    (0x00068139, "0faf0504fc3f00"),
    (0x000c70ce, "0faf0d207f3f00"),
    (0x000f3181, "66895c241c"),
    (0x000f08a9, "66895c2420"),
    (0x000f84d0, "66895c2414"),
    (0x000f8590, "66895c2414"),
    (0x002f221d, "8d7df4a5a5a5ff4df68d75f4"),
    (0x002b650f, "f30f10000f1640040f59c00fc6c8800f58c80fc6c903f30f58c8f30f114c2404"),
    (0x002b652f, "d9442404d81dbc4f3a00dfe0f6c4057a0c"),
    (0x002b6554, "f30f52442408f30f11442400"),
    (0x002b65af, "f30f10000f1640040f59c00fc6c8800f58c80fc6c903f30f58c8f30f114c2400"),
    (0x002b65cf, "d9442400d81dbc4f3a00dfe0f6c4057a08"),
    (0x002b65f0, "f30f52442404f30f11442400"),
    (0x00059003, "d905a8214000"),
    (0x00059026, "d905a8214000"),
    (0x0005902c, "d80da8214000"),
    (0x00095088, "d905fc7d3f00"),
    (0x000950be, "d80d007e3f00"),
    (0x000950f2, "d80dfc7d3f00"),
    (0x0009511c, "d80d007e3f00"),
    (0x000d205c, "d80d30d64000"),
    (0x000ea861, "d80d54cf4000"),
    (0x001278c6, "d80de8cb4000"),
    (0x001278f0, "d80de8cb4000"),
    (0x001278fe, "d80de8cb4000"),
    (0x00127995, "d905e8cb4000"),
    (0x001279f3, "8b15e8cb4000d83de8cb4000"),
    (0x0012bc95, "d80d64053c00"),
    (0x0012c1a6, "d80d64053c00"),
    (0x002125a6, "d9057c704000"),
    (0x00212691, "d80d7c704000"),
    (0x002c3518, "d80d90274000"),
    (0x00319c72, "d90590f63200"),
    (0x00319c9a, "d90590f63200"),
    (0x00319cc0, "d80d90f63200"),
    (0x00319ea9, "d90590f63200"),
    (0x00319ec1, "d90590f63200"),
    (0x00319f56, "d90590f63200"),
    (0x00319f6e, "d90590f63200"),
    (0x000d5e17, "a1d4984600"),
    (0x000d5e27, "ffd0"),
    (0x000d6270, "a1d4984600"),
    (0x000d6280, "ffd0"),
    (0x000d629e, "a1d4984600"),
    (0x000d62ae, "ffd0"),
    (0x000d62b0, "a1d4984600"),
    (0x000d62cd, "a1d4984600"),
    (0x000d62dd, "ffd0"),
    (0x000d6545, "a1d4984600"),
    (0x000d6555, "ffd0"),
    (0x000d6660, "a1d4984600"),
    (0x000d6670, "ffd0"),
    (0x000d6796, "a1d4984600"),
    (0x000d67a6, "ffd0"),
    (0x000d68e8, "a1d4984600"),
    (0x000d68f8, "ffd0"),
    (0x000d6902, "a1d4984600"),
    (0x000d6912, "ffd0"),
    (0x000d80c3, "a1d4984600"),
    (0x000d80d3, "ffd0"),
    (0x0017f700, "a1d4984600"),
    (0x0017f71d, "ffd0"),
    (0x0017f7fd, "a1d4984600"),
    (0x0017f80d, "ffd0"),
    (0x001e15e0, "a1d4984600"),
    (0x001e15f0, "ffd0"),
    (0x001e169f, "a1d4984600"),
    (0x001e16af, "ffd0"),
    (0x001e1c3c, "a1d4984600"),
    (0x001e1c4c, "ffd0"),
    (0x001e1ecc, "a1d4984600"),
    (0x001e1edc, "ffd0"),
    (0x0021961e, "a1d4984600"),
    (0x0021963c, "ffd0"),
    (0x00219698, "a1d4984600"),
    (0x002196a8, "ffd0"),
    (0x002be7e3, "ff1530984600"),
    (0x002e47d4, "ff1568e84000"),
    (0x002e47e2, "ff156ce84000"),
    (0x0031857f, "ff15a0f73200"),
    (0x00357f7e, "8b3d84164b00"),
    (0x00357f95, "a180164b00"),
    (0x00357fb7, "a380164b00"),
    (0x00357fbe, "ffd0"),
    (0x00357fc4, "a384164b00"),
    (0x00357fc9, "8b3d84164b00"),
    (0x003580a2, "ffd7"),
    (0x0036059a, "ff15404b4100"),
    (0x003606e3, "ff15204b4100"),
    (0x0036071d, "ff15104b4100"),
    (0x00360725, "ff15384b4100"),
    (0x00360738, "ff15204b4100"),
    (0x003607d3, "ff15404b4100"),
    (0x00360b02, "ff15384b4100"),
    (0x00360c05, "ff15384b4100"),
    (0x00360c92, "ff15384b4100"),
    (0x00360e02, "ff15384b4100"),
    (0x00314e0f, "ff159cf73200"),
    (0x00239d50, "a1d4984600"),
    (0x00239d60, "ffd0"),
    (0x002ec3ff, "a108f54000"),
    (0x002ec409, "ffd0"),
    (0x002ff1fa, "a15c4b4100"),
    (0x002ff207, "ffd0"),
    (0x002a5737, "a15c984600"),
    (0x002a5745, "ffd0"),
    (0x002ff2d4, "ff15604b4100"),
    (0x001e4e00, "a1d4984600"),
    (0x001e4e10, "ffd0"),
    (0x002a5790, "a15c984600"),
    (0x002a579e, "ffd0"),
    (0x00356e45, "a380164b00"),
    (0x00356e4f, "ffd0"),
    (0x002e45cf, "ff1568e84000"),
    (0x0035a5a9, "a1dc504b00"),
    (0x0035a5c1, "ffd0"),
    (0x002f8e0e, "a1fc2a4100"),
    (0x002f8e1b, "ffd0"),
    (0x001e1a68, "a1d4984600"),
    (0x001e1a78, "ffd0"),
    (0x002e470a, "ff1568e84000"),
    (0x002e4722, "ff156ce84000"),
    (0x0025e46a, "a1d4984600"),
    (0x0025e47a, "ffd0"),
    (0x0025e493, "a1d4984600"),
    (0x0025e4a3, "ffd0"),
    (0x0025e4b7, "a1d4984600"),
    (0x0025e4c9, "ffd0"),
    (0x000f0877, "33db"), (0x000f3147, "33db"),
    (0x000f8487, "33db"), (0x000f8547, "33db"),
)
# Four-byte original initializers corroborate storage; opcode use establishes type.
INITIAL_WORDS = (
    (0x004021a8, 0xbf800000), (0x003f7dfc, 0x3f800000),
    (0x003f7e00, 0x3f800000), (0x0040d630, 0x41200000),
    (0x0040cf54, 0x40000000), (0x0040cbe8, 0x41100000),
    (0x003c0564, 0x41000000), (0x0040707c, 0x3e19999a),
    (0x00402790, 0x3f666666), (0x0032f690, 0x4b000000),
    (0x003a4fbc, 0x2edbe6ff),
)


def verify(raw: bytes) -> None:
    if hashlib.sha256(raw).hexdigest().upper() != XBE_SHA256:
        raise ValueError("Wrong input: XBE SHA-256 differs from original")
    if raw[:4] != b"XBEH":
        raise ValueError("Not an XBE header")
    # Image base: header file +0x104. Section count/table VA: file +0x11c.
    base, = struct.unpack_from("<I", raw, 0x104)
    count, table_va = struct.unpack_from("<II", raw, 0x11C)
    table = table_va - base
    # A section header occupies 56 bytes; the first six fields are 32-bit words.
    if not (0 < count <= 256 and 0 <= table and table + count * 56 <= len(raw)):
        raise ValueError("Invalid section header table")
    sections = [struct.unpack_from("<6I", raw, table + i * 56) for i in range(count)]

    def source_slice(va: int, size: int) -> bytes:
        for _flags, addr, virtual_size, offset, raw_size, _name in sections:
            delta = va - addr
            if 0 <= delta and delta + size <= min(virtual_size, raw_size):
                begin = offset + delta
                if 0 <= begin and begin + size <= len(raw):
                    return raw[begin:begin + size]
        raise ValueError(f"Unmapped or not file-backed original VA 0x{va:08X}")

    for entry, ranges, sha in FUNCTIONS:
        body = b"".join(source_slice(va, size) for va, size in ranges)
        if hashlib.sha256(body).hexdigest().upper() != sha:
            raise ValueError(f"Original function body mismatch: 0x{entry:08X}")
    for va, opcode in OPCODES:
        expected = bytes.fromhex(opcode)
        if source_slice(va, len(expected)) != expected:
            raise ValueError(f"Original instruction mismatch: 0x{va:08X}")
    for va, expected in INITIAL_WORDS:
        actual, = struct.unpack("<I", source_slice(va, 4))
        if actual != expected:
            raise ValueError(f"Original initializer mismatch: 0x{va:08X}")
    print(f"Verified XBE SHA-256, {len(FUNCTIONS)} function bodies, "
          f"{len(OPCODES)} instruction windows and {len(INITIAL_WORDS)} initializers.")
    print("C11 syntax, callback ABI, linked data storage and 1:1 behavior remain separate gates.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--xbe", type=Path, required=True,
                        help="Local user-owned retail default.xbe; never uploaded")
    args = parser.parse_args()
    verify(args.xbe.read_bytes())
