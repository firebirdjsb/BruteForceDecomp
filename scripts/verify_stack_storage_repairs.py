#!/usr/bin/env python3
"""Pin observed stack storage; no complete C ABI or behavior claim."""
import argparse
import hashlib
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from audit_xbe_first_100 import mapped_span, xbe_sections
from body_hash_labels import read_body_digest
from source_layout import source_path

# Entry, byte count or ordered (relative offset, size) spans, exact body SHA-256.
BODIES = (
    (0x002BB980, 622, "8cb376c292fa8f6967bae34aee2046268e94d533917193e144975fcd03387261"),
    (0x0033E13A, 473, "3ead9b1ea3ad925b15e8e133cf594f57f6d8b4a840dd9979a5b1d92058e8aed1"),
    (0x0034BD47, 472, "fba8da494e65b869d42f6bb90d71d1bffa3330d9f6068ed85e2029896e957d73"),
    (0x001F3FB0, ((0,369),(620,12)), "7fb32f534c6943500c9d55895945af2c3567f55d8fef5bf3a6a72a8493cbbec5"),
    (0x00209F40, 327, "616c03bf83a483520a4a94ec3b1c13136f06d3fd3aebd46bdafd0d2d879f5d06"),
    (0x002710E0, ((0,205),(208,168)), "b91d8c20f819f97d67056cabe45481d26d2982218d0deb1f2f3ace30f3aeb897"),
    (0x00200080, 257, "9a08227013ee4d66230c3265c2243f909b93cc285f9ea8216ffde459ec639f2a"),
    (0x00201E80, 298, "f99a52250cec93ec0721dacda5e652c5b8c472880e389f5918bace01c7213abd"),
    (0x00208A70, 305, "a49d505e5385826be2d57bc06859d9fb01c3f0a14c367cfa9440d22528725647"),
    (0x00223F00, 195, "b7823c192ac1f8078af10d9e878d195db38d9ed02a1d9c78cc17cfe3114ceda0"),
    (0x002B6100, ((0,106),(112,208)), "87e2effb6df1992c6d974f857d6c231010e5d8e40026e0cd3e11f32b516627f6"),
    (0x002B6240, 252, "39f0c92758428773ffff08c68cc155970ca8835341130b20756393ed56f1ace7"),
    (0x0012BAF0, 363, "a158ab8baeae0c76832bf083f550b79e29ff902e9429fbd043c32df2b54afbad"),
    (0x00233B10, 128, "4911f4e987f45df85a910e477357c52f90778b138eed1ec08b40ab9d5839c479"),
    (0x0010A2E0, 307, "b6f4946cc952ff7d69f9260284540300fbe9d6efedeb5a029ae1fb3713b56d38"),
    (0x0010ABB0, 309, "925fdd7fee9c95b51ec089f9a29af2b31131827d67a72e3113d90df7119ba10a"),
    (0x001F8C90, 280, "af6d003d928de65fde56b9138c3a5cde5961eaa0a9f29eaf6a6ffa227c0c67a8"),
    (0x00202F40, 285, "320cb01d45ae02fdbf082d43fa39528fc938d04d609b4d392d64629472dba284"),
    (0x000D1BF0, 197, "76d6709edeef5e252b16402d65a17aaa098e6cee1114537f12ad1d087e919c12"),
    (0x00232F20, 247, "c117ee3c01269202e8055f3d45ffe64bdbfdd4f18c087df727dacc8a2f4eb5f3"),
    (0x00233290, 276, "51de2978460dd0eeeafec427b85e551ada075137dbca706b5d4d32d84f101bb6"),
    (0x002BA7F0, 173, "4d2862b65cb1228814f8196eb5c6fc91cc7e079b0fe45ec7272d5269368eb972"),
    (0x002CDCB0, 190, "68716ae5d7fbad548e962ad224159a916537d7438301229d54137f5a5b96c875"),
    (0x00210BF0, 95, "f00525729d4a2a45eadad7a918b42a19075f6af0b645dff633c75aa77b27d853"),
    (0x002D34C0, 159, "6e5d6a30084232261e1bdfd24d27010d4decf7b60f7e3b5e36d5e7d1374ce2fd"),
    (0x002BA160, 248, "3f0e95b193dd627d119e63e5587739cd4702c3625c2e8a97e9a70b112b0cc220"),
    (0x000EDF70, 163, "0b830a44d5a18b20117b40b72f3e68476fab00ed834cc2a45c059d8fcbe2a321"),
    (0x00141630, 131, "e4eab6557c599efcd081a27ea7c39f05d404297dca1e2a6824c7d94bd7f66cb7"),
    (0x001B1810, 122, "ce32ba1039c9aa0f3cde0c123114b2a49c4d9e409cba37fab5d9429aa82ee92d"),
    (0x00200400, 126, "9cb54fb5a6e0186fa1590917ff23225a016dcfde79e4ae2d3b55a46ff8456520"),
    (0x00202AF0, 162, "efab2fac68a640c0e5d90e582f630ae7c7457da5858c226e33d4c9d2466d4aa5"),
    (0x0034D40C, 169, "d060a408242fec4d254dfc2efdb3a38fb903d3a1c053640b2bbe58dacaccd529"),
    (0x003518D4, 1169, "2d04eef67634b63204dafa78df34dd2bd3df86f3443892548236b119e8e7feec"),
    (0x000330B0, 528, "fea2683e6e913fb8e089ea0726c6b535c6cadb4d33c395c4bac409293eafcba7"),
    (0x00033B00, 379, "33ad99064a1dd6c9af61a4554cb5258cc3f42e58b721bb80ec6698a4875f4ac8"),
    (0x000410A0, 629, "d18a552122c8f7858e73681bb8e52b4fba5560e0e02abf045b20e8ced4a8c676"),
    # Unchanged dependencies whose complete selector bodies were inspected.
    (0x0034FEDF, 150, "c7c7f9180d052ab62b3a19f5cd8dff64c02feba04c1072d5b66b46f72d968cf8"),
    (0x0035055A, 145, "4a89089d7b8088677548578d0b3a8ca5d8f7083a83fde3d81d4a83639cc848ca"),
    # Additional byte/float storage views; complete ABI remains unverified.
    (0x000B1CC0, 166, "9ddc81b16371f0d4b37f63bf7d7ebfdd012a0323c5f32d0b5d4bc62fbc5e0ac9"),
    (0x000EDDD0, 196, "9690e482426c8c7ca8bb1a1de3da1ab58faf53b97fcfeb2eed84f320f3543cc6"),
    (0x00149D30, 216, "76c09961b94f5d0b05438ee279f5ca1c9d30e0b8641192dae901351b83d13545"),
    (0x0017AB50, 190, "f6c349c3f8c2eaf6e6b8932aaf6f838a0f3b35f2ea373830813523e3b6e19a07"),
    (0x0017E510, 144, "67ed35bc6cbabc973ace56c077ff5791831dcf7c8c8a5efa2b1a3aaba7a467e1"),
    (0x002AB210, 151, "06b8ea4d37eda8d80281bd37510ac475c244faf3f82dc164f80a316df8e88a70"),
    (0x002D5FF0, 174, "79b6496470940ca5bcde90501fb860d89a20e69b734b0464fe06c71a996b7349"),
    (0x00314E18, 76, "4b7ad4fa4893ae0ffc06f14731b6b428beb3915efa30e3841700ecaf0d60994d"),
    (0x0033C1E8, 346, "a107823295b58f08960b98e376583afce8fde4dd2ed7795f567db0dfd391f2cd"),
    (0x0033C0D7, 89, "28b0af26f9e8568737a9986bde99da54e4c3a499237cd169b7360fa809ef5a33"),
    (0x002EA100, ((0, 91), (92, 7), (112, 41), (156, 35), (192, 29), (256, 74), (348, 7), (356, 11), (368, 17), (388, 23), (412, 38), (452, 9), (464, 31), (508, 33), (544, 39), (584, 49), (668, 74), (760, 7), (768, 13), (784, 19), (804, 25)), "e5fc1828550e279344bbf0f85779e8d9677db7b614dc28e4ecabd2d0c12646e0"),
    (0x002D62F0, 165, "5ef676ee82d3ae3d81bad457b0bbb6d32be308656a394a870de5345c18dde6b3"),
)
WINDOWS = {
    0x002BBA79: "dd442408dd5424088b44240c8b54240889817c010000899178010000",  # FLD/FST then high/low stores
    0x002BBB89: "dd5c24088b4424088b54240c898180010000899184010000",  # FSTP then low/high stores

    0x0033E262: "0fb64513500fb64512500fb64511500fb6451050",  # MOVZX/PUSH bytes 3,2,1,0
    0x0033E27D: "e8affcffff83c41c",  # formatter call; caller removes seven DWORDs

    0x0034BD4E: "8b7d08",  # EDI retains original pointer word
    0x0034BD77: "8b5610",  # read DWORD into EDX
    0x0034BD8A: "895508",  # reuse incoming argument slot with entire EDX
    0x0034BE3C: "807d087f",  # compare only low byte of that DWORD

    0x00208B6D: "b00184c0",  # update AL only, then test it
    0x00208B98: "b001",  # final AL-only success

    0x001F3FE7: "c644243400",  # incoming second word byte=0
    0x001F401D: "8a542432",  # byte 2 of helper-written first word
    0x001F403F: "8a5c2437",  # byte 3 after EBX save
    0x001F4062: "c644243801",  # same flag byte after EBX save
    0x001F40D8: "8a442434",  # return flag in AL
    0x00209F5C: "8844241c",  # third incoming slot partial write
    0x00209F81: "8844241c",  # success byte
    0x0020A058: "8d44242050",  # address of flag slot after push
    0x0020A079: "8a442438",  # reload byte with 28 argument bytes pending
    0x00271128: "8a442414",  # incoming pointer word low byte
    0x00271133: "8806",  # write byte to object +0x80
    0x00271159: "8a4c2414",  # same pointer word low byte
    0x00271164: "880e",  # write byte to object +0x8c

    0x0020009C: "8844241c",  # incoming third word byte
    0x0020014B: "c644241c01",  # byte success
    0x00200160: "8d742430",  # implicit ESI aliases flag slot
    0x00200173: "8a442430",  # reload AL
    0x00201E9C: "8844241c",  # incoming third word byte
    0x00201F54: "c644241c01",  # byte success
    0x00201F83: "8d4c241c51",  # pass address of whole slot
    0x00201F9F: "8a44241c",  # return low byte
    0x00208A8C: "8844241c",  # initial result byte
    0x00208B1C: "c644241c01",  # byte success
    0x00208B31: "8d742430",  # implicit helper alias
    0x00208B44: "8a442430",  # reload result

    0x00223F19: "88442414",  # partial incoming DWORD byte store
    0x00223F25: "d8590cdfe0f6c4057a0a",  # FCOMP/TEST/JP unordered-inclusive right
    0x00223F33: "88442414",  # low byte=1
    0x00223F3E: "88442414",  # low byte=0
    0x00223F87: "d85d00dfe0f6c4057a24",  # reversed FCOMP unordered-inclusive found
    0x00223F91: "8b5424145552",  # forward complete incoming word
    0x002B6184: "f30f101a0f165a04",  # input vector [x,0,y,z]
    0x002B61A8: "0f59c4",  # first multiply destination/source order
    0x002B61BB: "0f59cd0fc6dbff0f58c10f59d30f58c2",  # ordered mul/add/mul/add
    0x002B61CF: "f30f11000f174004",  # compact output to scratch
    0x002B626C: "8d0411",  # source is input + row byte offset
    0x002B627F: "f30f101a0f165a04",  # same input lane layout
    0x002B62B6: "0f59cd0fc6dbff0f58c10f59d30f58c2",  # ordered arithmetic
    0x002B62CA: "f30f11000f174004",  # scratch-before-output

    0x0012BB51: "f30f10000f1640040f59c1",  # [x,0,y,z] times broadcast
    0x0012BB60: "f30f11000f174004",  # compact low/high lanes
    0x0012BBDE: "f30f51442408",  # SQRTSS
    0x0012BBF2: "f30f52442408",  # RSQRTSS
    0x00233B19: "0f10080f1012",  # two full vector loads
    0x00233B43: "0fc6e401",  # first reduction shuffle
    0x00233B53: "0f2fc77307",  # COMISS/JAE; unordered flips sign
    0x00233B58: "0f571500d93800",  # XOR original sign mask
    0x00233B6E: "f30f10d00fc6c001f30f58c2",  # final pair1 + pair0
    0x00233B7A: "f30f52c00fc6c0000f59c8",  # RSQRT broadcast multiply
    0x0038D900: "00000080000000800000008000000080",  # four sign bits

    0x0010A2F5: "837d0806",  # CMP DWORD +8,6
    0x0010A317: "837d24087205",  # unsigned capacity below 8
    0x0010A31D: "8b4510",  # allocated guest DWORD address
    0x0010A322: "8d4510",  # inline address
    0x0010A3A9: "837d24087205",  # repeat after helper
    0x0010A3AF: "8b4510",  # allocated address again
    0x0010A3C9: "668b4424360fb6d4c1e2080fb6e903d5c1e2080fb6cd03d1",  # bytes 3,0,1
    0x0010A3E5: "0fb6c0c1e20803d0",  # append byte 2
    0x0010ABEA: "c7470800000000",  # DWORD flag zero
    0x0010AC05: "c7470806000000",  # DWORD flag six
    0x0010AC31: "837f2408",  # capacity unsigned comparison
    0x0010AC45: "72058b4710eb038d4710",  # allocated DWORD or inline address

    0x001F8CAF: "8844244c",  # low byte at entry ESP+8 after 0x44 frame/save bytes
    0x001F8CD3: "8844244c",  # replace the same byte with AL=1
    0x001F8D2D: "807c244c01",  # compare only that byte
    0x001F8D48: "8d4c244c51",  # forward address of reused incoming slot
    0x001F8D69: "8a44245c",  # read same byte with 16 argument bytes pending
    0x00202F5C: "8844241c",  # low byte at entry ESP+12 after four saved registers
    0x00202F80: "c644241c01",  # set same byte
    0x00202F95: "8d742430",  # ESI points at same slot after 20 argument bytes
    0x00202FA8: "8a442430",  # reload status byte after helper
    0x00203024: "8a442444",  # same slot with 40 argument bytes pending

    0x000D1C4B: "f30f53c9",  # rcpss xmm1, xmm1
    0x00232F79: "f30f53ff",  # rcpss xmm7, xmm7
    0x00232FF5: "f30f53f6",  # rcpss xmm6, xmm6
    0x00233392: "f30f53c0",  # rcpss xmm0, xmm0
    0x002BA85E: "0f59c0",  # mulps xmm0, xmm0
    0x002BA861: "0fc6c880",  # shufps xmm1, xmm0, 0x80
    0x002BA865: "0f58c8",  # addps xmm1, xmm0
    0x002BA868: "0fc6c903",  # shufps xmm1, xmm1, 3
    0x002BA86C: "f30f58c8",  # addss xmm1, xmm0
    0x002BA87E: "f30f51442410",  # sqrtss xmm0, dword ptr [esp + 0x10]
    0x002CDD2A: "0f59c0",  # mulps xmm0, xmm0
    0x002CDD2D: "0fc6c880",  # shufps xmm1, xmm0, 0x80
    0x002CDD31: "0f58c8",  # addps xmm1, xmm0
    0x002CDD34: "0fc6c903",  # shufps xmm1, xmm1, 3
    0x002CDD38: "f30f58c8",  # addss xmm1, xmm0
    0x00210C00: "c644240801",  # low byte only, incoming DWORD
    0x00210C1A: "884c240c",  # same byte after extra register save
    0x00210C2F: "8b4c24085351",  # read and forward entire original word
    0x002D3536: "f30f10080f164804",  # MOVSS/MOVHPS: lanes 0,2,3
    0x002D3542: "f30f10120f165204",  # corresponding subtrahend lanes
    0x002D354A: "0f5cca",  # SUBPS second helper output minus first
    0x002D3551: "f30f11080f174804",  # store exactly three floats
    0x000EDF8C: "8844241c",  # store AL in reused input byte
    0x000EDFDC: "8a4c2454",  # load only that byte after two calls
    0x00141633: "8a442428",  # read first incoming byte
    0x0014163E: "88442414",  # copy it into helper input storage
    0x0020041C: "8844241c",  # store AL in reused third input slot
    0x00200445: "8a442430",  # read that byte after call arguments
    0x00202B0C: "8844241c",  # corresponding store in related routine
    0x00202B35: "8a442430",  # corresponding byte read
    0x001B183C: "8d54241052",  # address and push entry ESP+4 after saves
    0x001B1854: "c20400",  # RET 4 on growth path
    0x001B1887: "c20400",  # RET 4 on other path
    0x001A6835: "518bc4c700000000008d040e8bcf",  # caller writes one zero DWORD
    0x001A6843: "e8c8af0000",  # caller CALL 0x001b1810
    0x000757A3: "8b45108b08894dec",  # helper reads one DWORD through third argument
    0x0034D444: "8db3e60100008d7df8a566a5",  # LEAs, MOVSD+MOVSW into six local bytes
    0x0034D46E: "8d7df8a566a5",  # optional replacement of those same bytes
    0x0034D47E: "66f3a7742b",  # compare three words; branch on equality
    0x0034D48A: "8b45f8a3a800f0fe0fb745fca3ac00f0fe",  # DWORD then MOVZX WORD stores
    0x0034D49B: "8d75f88dbbe0010000a58bcb66a5",  # copy six local bytes back
    0x00351BBB: "c645f803",  # selector byte=3
    0x00351C66: "c645f806",  # selector byte=6
    0x00351BEF: "ff75f8",  # original argument reads full DWORD; high bytes unknown
    0x0034FF2E: "3a5510",  # ultimate consumer compares only selector byte
    0x0035057D: "ff750c",  # forwarding path 1
    0x003505A7: "ff750c",  # forwarding fallback path 2
    0x003505D0: "ff750c",  # forwarding fallback path 3
    0x0003318D: "f30f10000f1640040f28d00f59c0",  # MOVSS/MOVHPS and packed square
    0x000331B9: "f30f52c90fc6c9000f59d1f30f11100f175004",  # RSQRT/broadcast/MULPS/stores
    0x00033BAC: "f30f10000f1640040f28d00f59c0",  # same observed memory-lane load
    0x00033BD8: "f30f52c90fc6c9000f59d1f30f11100f175004",  # same observed packed stores
    0x00033C53: "d81d7c4f3a00dfe0f6c4057a14",  # x87 compare; unordered branch
    0x000410F3: "f30f51442410",  # SQRTSS memory operand
    0x00041138: "f30f1044240c0fc6c000",  # MOVSS and reciprocal-root broadcast
    0x00041146: "f30f10080f1648040f59c1",  # MOVSS/MOVHPS and packed scale
    0x003A4018: "acc5a737",  # exact binary32 normalization threshold
    0x003A5150: "00008028",  # exact binary32 first 0x410a0 threshold
    0x003A4FFC: "00000034",  # exact binary32 second threshold
    0x000B1CDF: "8b00",  # mov eax, dword ptr [eax]
    0x000B1CE1: "89442414",  # mov dword ptr [esp + 0x14], eax
    0x000B1CE5: "8a4c2415",  # mov cl, byte ptr [esp + 0x15]
    0x000B1CE9: "8a5c2416",  # mov bl, byte ptr [esp + 0x16]
    0x000B1CED: "8ad0",  # mov dl, al
    0x000B1CF2: "88483a",  # mov byte ptr [eax + 0x3a], cl
    0x000B1CF5: "885038",  # mov byte ptr [eax + 0x38], dl
    0x000B1CF8: "885839",  # mov byte ptr [eax + 0x39], bl
    0x000EDDEC: "8844241c",  # mov byte ptr [esp + 0x1c], al
    0x000EDE10: "c644241c01",  # mov byte ptr [esp + 0x1c], 1
    0x000EDE86: "8a442458",  # mov al, byte ptr [esp + 0x58]
    0x00149D46: "c644241001",  # mov byte ptr [esp + 0x10], 1
    0x00149D4D: "c644241000",  # mov byte ptr [esp + 0x10], 0
    0x00149DC9: "c644241400",  # mov byte ptr [esp + 0x14], 0
    0x00149DF6: "8a442410",  # mov al, byte ptr [esp + 0x10]
    0x0017AB50: "8a442404",  # mov al, byte ptr [esp + 4]
    0x0017AB5C: "8b6c240c",  # mov ebp, dword ptr [esp + 0xc]
    0x0017AB94: "e8a7260000",  # call 0x17d240
    0x0017ABD0: "8a08",  # mov cl, byte ptr [eax]
    0x0017E524: "c7442424286b6e4e",  # mov dword ptr [esp + 0x24], 0x4e6e6b28
    0x0017E573: "d8542424",  # fcom dword ptr [esp + 0x24]
    0x0017E57E: "d95c2424",  # fstp dword ptr [esp + 0x24]
    0x002AB21A: "c744240400000000",  # mov dword ptr [esp + 4], 0
    0x002AB226: "8d4c2424",  # lea ecx, [esp + 0x24]
    0x002AB245: "f30f5f44240c",  # maxss xmm0, dword ptr [esp + 0xc]
    0x002AB269: "d95c2418",  # fstp dword ptr [esp + 0x18]
    0x002AB27E: "f30f5f442414",  # maxss xmm0, dword ptr [esp + 0x14]
    0x002AB29E: "d9442404",  # fld dword ptr [esp + 4]
    0x002D6063: "8d7c240c",  # lea edi, [esp + 0xc]
    0x002D6068: "8d7c240c",  # lea edi, [esp + 0xc]
    0x002D6074: "d9442408",  # fld dword ptr [esp + 8]
    0x002D607B: "d844240c",  # fadd dword ptr [esp + 0xc]
    0x002D6085: "d91c24",  # fstp dword ptr [esp]
    0x00314E1D: "8b4e50",  # mov ecx, dword ptr [esi + 0x50]
    0x00314E20: "8b5104",  # mov edx, dword ptr [ecx + 4]
    0x00314E23: "8b4648",  # mov eax, dword ptr [esi + 0x48]
    0x00314E26: "8b00",  # mov eax, dword ptr [eax]
    0x00314E28: "8916",  # mov dword ptr [esi], edx
    0x00314E33: "83c004",  # add eax, 4
    0x00314E39: "83793c01",  # cmp dword ptr [ecx + 0x3c], 1
    0x00314E41: "d820",  # fsub dword ptr [eax]
    0x0033C230: "8d450b",  # lea eax, [ebp + 0xb]
    0x0033C2CD: "8d4d0b",  # lea ecx, [ebp + 0xb]
    0x0033C31E: "8a450b",  # mov al, byte ptr [ebp + 0xb]
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xbe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    blob = args.xbe.read_bytes()
    sections = xbe_sections(blob)  # Requires the pinned whole-XBE SHA-256.
    for entry, size, digest in BODIES:
        spans = ((0, size),) if isinstance(size, int) else size
        body = b"".join(mapped_span(blob, sections, entry + offset, length)
                        for offset, length in spans)
        actual = hashlib.sha256(body).hexdigest()
        embedded, conflict = read_body_digest(
            source_path(args.root, f"0x{entry:08x}").read_text(encoding="utf-8"))
        if actual != digest or conflict or embedded is None or embedded.lower() != digest:
            parser.exit(1, f"FAIL original/source body provenance at {entry:#010x}\n")
    for address, expected in WINDOWS.items():
        expected = bytes.fromhex(expected)
        if mapped_span(blob, sections, address, len(expected)) != expected:
            parser.exit(1, f"FAIL instruction window at {address:#010x}\n")
    print(f"PASS {len(BODIES)} original/source body digests and {len(WINDOWS)} instruction windows")
    print("Byte/storage facts only; full interfaces, guest mapping and behavior remain unverified.")


if __name__ == "__main__":
    main()
