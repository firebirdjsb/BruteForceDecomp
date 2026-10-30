/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7782FB7435631E609336B19C2D0FB56D20224FC355F79FEF13D6A34D3693214
 * Entry: 0x000b9120, Ghidra index: 2237, label: FUN_000b9120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000c4f60(void);
extern void FUN_000b9e80(void);
extern void FUN_000c0040(void);

extern void FUN_000c1d80(void);
extern void FUN_000c3a50(void);
extern void FUN_000b45c0(void);
extern void FUN_000bd860(void);
extern void FUN_000c7660(void);
extern void FUN_000c37a0(void);
extern void FUN_000b6510(void);
extern void FUN_000c72b0(void);
extern void FUN_000c67b0(void);
extern void FUN_000b2230(void);
extern void FUN_000b9ee0(void);
extern void FUN_000ad8d0(void);
extern void FUN_000acd90(void);
extern void FUN_000b2af0(void);
extern void FUN_000c24f0(void);
extern void FUN_000c2d40(void);

extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000b4010(void);
extern void FUN_000b9e60(void);
extern void FUN_000ab8d0(void);
extern void FUN_000c3550(void);
extern void FUN_000c1b30(void);
extern void FUN_000ad2d0(void);
extern void FUN_000ca490(void);
extern void FUN_000bc310(void);
extern void FUN_000a9b90(void);
extern void FUN_000b9f00(void);
extern void FUN_000c4550(void);
extern void FUN_000adbc0(void);
extern void FUN_000c7cf0(void);
extern void FUN_000cc2a0(void);
extern void FUN_000bc060(void);
extern void FUN_000be6e0(void);
extern void FUN_000c1810(void);
extern void FUN_000b79a0(void);
extern void FUN_000b1c70(void);
extern void FUN_000c9b10(void);
extern void FUN_000aa000(void);
extern void FUN_000b9f20(void);

extern uint32_t DAT_004a5ca0;
extern uint32_t PTR_FUN_0039ff18;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000b9120(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *in_EAX;
  int iVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  uVar2 = *in_EAX;
  if (uVar2 < 0x1d6a2e2d) {
    if (uVar2 == 0x1d6a2e2c) {
      iVar4 = FUN_002ea01d(0x54);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_000acfb0();
        return puVar5;
      }
    }
    else if (uVar2 < 0x1018edf7) {
      if (uVar2 == 0x1018edf6) {
        iVar4 = FUN_002ea01d(0x40);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000b4010();
          return puVar5;
        }
      }
      else if (uVar2 < 0x9ec2dd7) {
        if (uVar2 == 0x9ec2dd6) {
          iVar4 = FUN_002ea01d(100);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000b9e60();
            return puVar5;
          }
        }
        else if (uVar2 < 0x37dbd93) {
          if (uVar2 == 0x37dbd92) {
            iVar4 = FUN_002ea01d(0xa0);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000ab8d0();
              return puVar5;
            }
          }
          else if (uVar2 < 0xe9535b) {
            if (uVar2 == 0xe9535a) {
              iVar4 = FUN_002ea01d(0x44);
              if (iVar4 != 0) {
                puVar5 = (undefined4 *)FUN_000c3550();
                return puVar5;
              }
            }
            else if (uVar2 == 0x66f11) {
              iVar4 = FUN_002ea01d(0x50);
              if (iVar4 != 0) {
                puVar5 = (undefined4 *)FUN_000c1b30();
                return puVar5;
              }
            }
            else if ((uVar2 == 0x88522f) && (iVar4 = FUN_002ea01d(0x78), iVar4 != 0)) {
              puVar5 = (undefined4 *)FUN_000ad2d0();
              return puVar5;
            }
          }
          else if (uVar2 == 0x29b8e6d) {
            iVar4 = FUN_002ea01d(0x90);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000ca490();
              return puVar5;
            }
          }
          else if ((uVar2 == 0x2a9b279) && (iVar4 = FUN_002ea01d(0x40), iVar4 != 0)) {
            puVar5 = (undefined4 *)FUN_000c2f80();
            return puVar5;
          }
        }
        else if (uVar2 < 0x7f28358) {
          if (uVar2 == 0x7f28357) {
            iVar4 = FUN_002ea01d(0x5c);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000bc310();
              return puVar5;
            }
          }
          else if (uVar2 == 0x739aee8) {
            iVar4 = FUN_002ea01d(0x98);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000a9b90();
              return puVar5;
            }
          }
          else if ((uVar2 == 0x7ccab64) && (iVar4 = FUN_002ea01d(0x3c), iVar4 != 0)) {
            puVar5 = (undefined4 *)FUN_000b9f00();
            return puVar5;
          }
        }
        else if ((uVar2 == 0x947d347) && (iVar4 = FUN_002ea01d(0x3c), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000c4550();
          return puVar5;
        }
      }
      else if (uVar2 < 0xde0060c) {
        if (uVar2 == 0xde0060b) {
          iVar4 = FUN_002ea01d(0xe0);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000adbc0();
            return puVar5;
          }
        }
        else if (uVar2 < 0xbcda718) {
          if (uVar2 == 0xbcda717) {
            iVar4 = FUN_002ea01d(0x90);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000c7cf0();
              return puVar5;
            }
          }
          else if (uVar2 == 0xb49b205) {
            iVar4 = FUN_002ea01d(0x98);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000cc2a0();
              return puVar5;
            }
          }
          else if ((uVar2 == 0xb5da197) && (iVar4 = FUN_002ea01d(0x68), iVar4 != 0)) {
            puVar5 = (undefined4 *)FUN_000bc060();
            return puVar5;
          }
        }
        else if ((uVar2 == 0xbfb047b) && (iVar4 = FUN_002ea01d(0x40), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000be6e0();
          return puVar5;
        }
      }
      else if (uVar2 < 0xf125fca) {
        if (uVar2 == 0xf125fc9) {
          iVar4 = FUN_002ea01d(0x74);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c1810();
            return puVar5;
          }
        }
        else if (uVar2 == 0xec62d9d) {
          iVar4 = FUN_002ea01d(0xdc);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000b79a0();
            return puVar5;
          }
        }
        else if ((uVar2 == 0xf0e12d1) && (iVar4 = FUN_002ea01d(0x60), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000b1c70();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xf94d225) && (iVar4 = FUN_002ea01d(0x74), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000c9b10();
        return puVar5;
      }
    }
    else if (uVar2 < 0x16bcf6d6) {
      if (uVar2 == 0x16bcf6d5) {
        iVar4 = FUN_002ea01d(0x3c);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000c6440();
          return puVar5;
        }
      }
      else if (uVar2 < 0x12a2bf70) {
        if (uVar2 == 0x12a2bf6f) {
          iVar4 = FUN_002ea01d(0x7c);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000aa000();
            return puVar5;
          }
        }
        else if (uVar2 < 0x11fb2341) {
          if (uVar2 == 0x11fb2340) {
            iVar4 = FUN_002ea01d(0x3c);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000b9f20();
              return puVar5;
            }
          }
          else if (uVar2 == 0x10a3305c) {
            iVar4 = FUN_002ea01d(0x54);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000acaf0();
              return puVar5;
            }
          }
          else if ((uVar2 == 0x10e1a415) && (iVar4 = FUN_002ea01d(0x54), iVar4 != 0)) {
            puVar5 = (undefined4 *)FUN_000c1d80();
            return puVar5;
          }
        }
        else if (uVar2 == 0x1207a43b) {
          iVar4 = FUN_002ea01d(0x38);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c3a50();
            return puVar5;
          }
        }
        else if ((uVar2 == 0x121cf7bb) && (iVar4 = FUN_002ea01d(0x90), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000b45c0();
          return puVar5;
        }
      }
      else if (uVar2 < 0x14fb058b) {
        if (uVar2 == 0x14fb058a) {
          iVar4 = FUN_002ea01d(0xe4);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000bd860();
            return puVar5;
          }
        }
        else if (uVar2 == 0x132d96f2) {
          iVar4 = FUN_002ea01d(0x68);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c7660();
            return puVar5;
          }
        }
        else if ((uVar2 == 0x146a96d3) && (iVar4 = FUN_002ea01d(0x4c), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000bb4d0(iVar4,0x10);
          return puVar5;
        }
      }
      else if ((uVar2 == 0x16b9cec9) && (iVar4 = FUN_002ea01d(0x38), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000c37a0();
        return puVar5;
      }
    }
    else if (uVar2 < 0x1ac66451) {
      if (uVar2 == 0x1ac66450) {
        iVar4 = FUN_002ea01d(0xa4);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000b6510();
          return puVar5;
        }
      }
      else if (uVar2 < 0x1a5ceeba) {
        if (uVar2 == 0x1a5ceeb9) {
          iVar4 = FUN_002ea01d(0x7c);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c72b0();
            return puVar5;
          }
        }
        else if (uVar2 == 0x17f9dd32) {
          iVar4 = FUN_002ea01d(0x44);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c67b0();
            return puVar5;
          }
        }
        else if ((uVar2 == 0x1851d6db) && (iVar4 = FUN_002ea01d(100), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000b2230();
          return puVar5;
        }
      }
      else if ((uVar2 == 0x1a936123) && (iVar4 = FUN_002ea01d(0x68), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000c92e0();
        return puVar5;
      }
    }
    else if (uVar2 < 0x1c8134b2) {
      if (uVar2 == 0x1c8134b1) {
        iVar4 = FUN_002ea01d(0x3c);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000b9ee0();
          return puVar5;
        }
      }
      else if (uVar2 == 0x1bc3dba0) {
        iVar4 = FUN_002ea01d(0x50);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000ad8d0();
          return puVar5;
        }
      }
      else if ((uVar2 == 0x1c748138) && (iVar4 = FUN_002ea01d(0x2c), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000ba5b0();
        return puVar5;
      }
    }
    else if ((uVar2 == 0x1d31e0a2) && (iVar4 = FUN_002ea01d(0x50), iVar4 != 0)) {
      puVar5 = (undefined4 *)FUN_000acd90();
      return puVar5;
    }
  }
  else if (uVar2 < 0xf27a8c6b) {
    if (uVar2 == 0xf27a8c6a) {
      iVar4 = FUN_002ea01d(0x34);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_000b2af0();
        return puVar5;
      }
    }
    else if (uVar2 < 0xe715e906) {
      if (uVar2 == 0xe715e905) {
        iVar4 = FUN_002ea01d(0x7c);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000c24f0();
          return puVar5;
        }
      }
      else if (uVar2 < 0xe07f03a4) {
        if (uVar2 == 0xe07f03a3) {
          iVar4 = FUN_002ea01d(0x74);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c2d40();
            return puVar5;
          }
        }
        else if (uVar2 < 0x1f5a34b6) {
          if (uVar2 == 0x1f5a34b5) {
            iVar4 = FUN_002ea01d(0xc4);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000c4f60();
              return puVar5;
            }
          }
          else if (uVar2 == 0x1eeaa123) {
            iVar4 = FUN_002ea01d(0x74);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_000ad690();
              return puVar5;
            }
          }
          else if ((uVar2 == 0x1f0aff78) && (iVar4 = FUN_002ea01d(0x40), iVar4 != 0)) {
            puVar5 = (undefined4 *)FUN_000b9e80();
            return puVar5;
          }
        }
        else if (uVar2 == 0x1f9d94c4) {
          iVar4 = FUN_002ea01d(0xc4);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000c0040();
            return puVar5;
          }
        }
        else if ((uVar2 == 0x1fade2ba) && (iVar4 = FUN_002ea01d(0x40), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000bb360();
          return puVar5;
        }
      }
      else if (uVar2 < 0xe2548d49) {
        if (uVar2 == 0xe2548d48) {
          puVar5 = (undefined4 *)FUN_002ea01d(0x50);
          if (puVar5 != (undefined4 *)0x0) {
            FUN_000bb4d0(puVar5,0x10);
            iVar4 = puVar5[0xb];
            *puVar5 = &PTR_FUN_0039ff18;
            puVar5[0x13] = 0;
            if ((iVar4 != 0) &&
               (((piVar1 = *(int **)(iVar4 + 0x24), piVar1 == (int *)0x0 || (*piVar1 != 0xc626fd5))
                || (piVar1[1] != 0xc)))) {
              uVar3 = FUN_000cd9c0(unaff_ESI,unaff_EDI);
              *(undefined4 *)(iVar4 + 0x24) = uVar3;
            }
            if ((_DAT_004a5ca4 & 1) == 0) {
              _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
              DAT_004a5ca0 = 0xffffd7c0;
            }
            uVar3 = DAT_004a5ca0;
            iVar4 = puVar5[0xb];
            *(undefined1 *)(iVar4 + 0x38) = (undefined1)DAT_004a5ca0;
            uVar6 = (undefined1)((uint)uVar3 >> 0x10);
            *(undefined1 *)(iVar4 + 0x3a) = uVar6;
            *(undefined1 *)(iVar4 + 0x39) = uVar6;
            *(byte *)(puVar5[0xb] + 0x3b) = *(byte *)(puVar5[0xb] + 0x3b) | 0x10;
            *(byte *)((int)puVar5 + 0x13) = *(byte *)((int)puVar5 + 0x13) | 1;
            *(byte *)(puVar5 + 0x12) = *(byte *)(puVar5 + 0x12) & 0xfc | 4;
            return puVar5;
          }
        }
        else if (uVar2 == 0xe16b7d98) {
          iVar4 = FUN_002ea01d(0xdc);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000b6cc0();
            return puVar5;
          }
        }
        else if ((uVar2 == 0xe253a281) && (iVar4 = FUN_002ea01d(0x38), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000bbcb0();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xe4652415) && (iVar4 = FUN_002ea01d(0x44), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000bc7f0();
        return puVar5;
      }
    }
    else if (uVar2 < 0xeefa382e) {
      if (uVar2 == 0xeefa382d) {
        iVar4 = FUN_002ea01d(0x30);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000bb2e0();
          return puVar5;
        }
      }
      else if (uVar2 < 0xee06e4c7) {
        if (uVar2 == 0xee06e4c6) {
          iVar4 = FUN_002ea01d(0x90);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000be330();
            return puVar5;
          }
        }
        else if (uVar2 == 0xe79fa12d) {
          iVar4 = FUN_002ea01d(0x50);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000ac890();
            return puVar5;
          }
        }
        else if ((uVar2 == 0xec7cac3c) && (iVar4 = FUN_002ea01d(0x38), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000bc470();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xee9ad830) && (iVar4 = FUN_002ea01d(0x30), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000b9f40();
        return puVar5;
      }
    }
    else if (uVar2 < 0xf1001755) {
      if (uVar2 == 0xf1001754) {
        iVar4 = FUN_002ea01d(0x94);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000cc140();
          return puVar5;
        }
      }
      else if (uVar2 == 0xf0bc0b1b) {
        iVar4 = FUN_002ea01d(0xac);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000b1a00();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xf0c9a77b) && (iVar4 = FUN_002ea01d(0x74), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000c1f00();
        return puVar5;
      }
    }
    else if ((uVar2 == 0xf1906cdc) && (iVar4 = FUN_002ea01d(0x50), iVar4 != 0)) {
      puVar5 = (undefined4 *)FUN_000c3d10();
      return puVar5;
    }
  }
  else if (uVar2 < 0xfa7c2b11) {
    if (uVar2 == 0xfa7c2b10) {
      iVar4 = FUN_002ea01d(0x84);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_000ab410();
        return puVar5;
      }
    }
    else if (uVar2 < 0xf6f7bc14) {
      if (uVar2 == 0xf6f7bc13) {
        iVar4 = FUN_002ea01d(0x80);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000cb1c0();
          return puVar5;
        }
      }
      else if (uVar2 < 0xf495027e) {
        if (uVar2 == 0xf495027d) {
          iVar4 = FUN_002ea01d(0xc4);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000b5450();
            return puVar5;
          }
        }
        else if (uVar2 == 0xf39c539e) {
          iVar4 = FUN_002ea01d(0x6c);
          if (iVar4 != 0) {
            puVar5 = (undefined4 *)FUN_000b8480();
            return puVar5;
          }
        }
        else if ((uVar2 == 0xf4867e74) && (iVar4 = FUN_002ea01d(0x44), iVar4 != 0)) {
          puVar5 = (undefined4 *)FUN_000b3bc0();
          return puVar5;
        }
      }
      else if (uVar2 == 0xf4d2c672) {
        iVar4 = FUN_002ea01d(0x9c);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000c5f60();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xf5c0f471) && (iVar4 = FUN_002ea01d(0x40), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000c48c0();
        return puVar5;
      }
    }
    else if (uVar2 < 0xf85da0aa) {
      if (uVar2 == 0xf85da0a9) {
        iVar4 = FUN_002ea01d(0x98);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000c8760();
          return puVar5;
        }
      }
      else if (uVar2 == 0xf7aa2d9f) {
        iVar4 = FUN_002ea01d(100);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000b9e40();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xf828b722) && (iVar4 = FUN_002ea01d(0x78), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000b7f10();
        return puVar5;
      }
    }
    else if ((uVar2 == 0xf96e9319) && (iVar4 = FUN_002ea01d(0x78), iVar4 != 0)) {
      puVar5 = (undefined4 *)FUN_000c69d0();
      return puVar5;
    }
  }
  else if (uVar2 < 0xfc8a6dfc) {
    if (uVar2 == 0xfc8a6dfb) {
      iVar4 = FUN_002ea01d(0x34);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_000b9eb0();
        return puVar5;
      }
    }
    else if (uVar2 < 0xfc21e243) {
      if (uVar2 == 0xfc21e242) {
        iVar4 = FUN_002ea01d(0x8c);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000b3520();
          return puVar5;
        }
      }
      else if (uVar2 == 0xfa8089c3) {
        iVar4 = FUN_002ea01d(0x94);
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_000cc020();
          return puVar5;
        }
      }
      else if ((uVar2 == 0xfc0572af) && (iVar4 = FUN_002ea01d(0x7c), iVar4 != 0)) {
        puVar5 = (undefined4 *)FUN_000b8210();
        return puVar5;
      }
    }
    else if ((uVar2 == 0xfc8939a3) && (iVar4 = FUN_002ea01d(0x74), iVar4 != 0)) {
      puVar5 = (undefined4 *)FUN_000b2c70();
      return puVar5;
    }
  }
  else if (uVar2 < 0xfe99bd56) {
    if (uVar2 == 0xfe99bd55) {
      iVar4 = FUN_002ea01d(0x78);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_000c2900();
        return puVar5;
      }
    }
    else if (uVar2 == 0xfcd4cbce) {
      iVar4 = FUN_002ea01d(0x70);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_000caff0();
        return puVar5;
      }
    }
    else if ((uVar2 == 0xfd45d0ed) && (iVar4 = FUN_002ea01d(0xd8), iVar4 != 0)) {
      puVar5 = (undefined4 *)FUN_000a9330();
      return puVar5;
    }
  }
  else if ((uVar2 == 0xfeadd3a3) && (iVar4 = FUN_002ea01d(0xdc), iVar4 != 0)) {
    puVar5 = (undefined4 *)FUN_000b7bf0();
    return puVar5;
  }
  return (undefined4 *)0x0;
}
