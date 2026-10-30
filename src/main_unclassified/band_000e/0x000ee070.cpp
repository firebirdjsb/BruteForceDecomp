/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69EEF5228D0072CA934EA0B04405E1E916BB6C112EA6973532C6626178189B3F
 * Entry: 0x000ee070, Ghidra index: 2959, label: FUN_000ee070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D allocation boundary takes one guest32 size and
 * returns guest32 EAX. No host allocation/pointer ABI is established. */
#include "bf_002ea01d_allocator_guest32.h"
undefined4 FUN_000ee070(void)

{
  uint uVar1;
  uint *in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *in_EAX;
  if (uVar1 < 0x1bafdc0e) {
    if (uVar1 == 0x1bafdc0d) {
      iVar2 = FUN_002ea01d(0x5c);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ec910();
      return uVar3;
    }
    if (0xf7922f8 < uVar1) {
      if (0x13677b6d < uVar1) {
        if (uVar1 == 0x16308887) {
          iVar2 = FUN_002ea01d(0x94);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_000ed0a0();
          return uVar3;
        }
        if (uVar1 == 0x18140cf6) {
          iVar2 = FUN_002ea01d(0x54);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_000ec820();
          return uVar3;
        }
        if (uVar1 != 0x1815b5c2) {
          return 0;
        }
        iVar2 = FUN_002ea01d(0x7c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ec2d0();
        return uVar3;
      }
      if (uVar1 == 0x13677b6d) {
        iVar2 = FUN_002ea01d(0x48);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ec460();
        return uVar3;
      }
      if (uVar1 == 0x1038c10e) {
        iVar2 = FUN_002ea01d(100);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ebf10();
        return uVar3;
      }
      if (uVar1 == 0x10b3ac7b) {
        iVar2 = FUN_002ea01d(0x38);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000eb860();
        return uVar3;
      }
      if (uVar1 != 0x126f47a3) {
        return 0;
      }
      iVar2 = FUN_002ea01d(0x68);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ec070();
      return uVar3;
    }
    if (uVar1 == 0xf7922f8) {
      iVar2 = FUN_002ea01d(0x3c);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ebf30();
      return uVar3;
    }
    if (uVar1 < 0x85b36d3) {
      if (uVar1 == 0x85b36d2) {
        iVar2 = FUN_002ea01d(0x38);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ecb50();
        return uVar3;
      }
      if (uVar1 != 0xb9c638) {
        if (uVar1 == 0x282a91f) {
          iVar2 = FUN_002ea01d(0x38);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_000ec050();
          return uVar3;
        }
        if (uVar1 != 0x3750ef9) {
          return 0;
        }
      }
      iVar2 = FUN_002ea01d(0x3c);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ebd10();
      return uVar3;
    }
    if (uVar1 != 0xa60658a) {
      if (uVar1 == 0xcec69df) {
        iVar2 = FUN_002ea01d(0x5c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000eb470();
        return uVar3;
      }
      if (uVar1 != 0xeef0757) {
        return 0;
      }
      iVar2 = FUN_002ea01d(0x78);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ec5a0();
      return uVar3;
    }
  }
  else {
    if (uVar1 < 0xefd397a2) {
      if (uVar1 == 0xefd397a1) {
        iVar2 = FUN_002ea01d(0x54);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ec180();
        return uVar3;
      }
      if (0xe22441fa < uVar1) {
        if (uVar1 == 0xe3b28b0a) {
          iVar2 = FUN_002ea01d(0x3c);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_000eb910();
          return uVar3;
        }
        if (uVar1 == 0xe538f1b2) {
          iVar2 = FUN_002ea01d(0x38);
          if (iVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_000ec9d0();
          return uVar3;
        }
        if (uVar1 != 0xedb11148) {
          return 0;
        }
        iVar2 = FUN_002ea01d(0x5c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000eb630();
        return uVar3;
      }
      if (uVar1 == 0xe22441fa) {
        iVar2 = FUN_002ea01d(0x3c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000eca80();
        return uVar3;
      }
      if (uVar1 == 0x1ee1b020) {
        iVar2 = FUN_002ea01d(0x8c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ebb00();
        return uVar3;
      }
      if (uVar1 == 0x1fc9ee4d) {
        iVar2 = FUN_002ea01d(100);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ebe90();
        return uVar3;
      }
      if (uVar1 != 0x1ff1d816) {
        return 0;
      }
      iVar2 = FUN_002ea01d(0x84);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000eb730();
      return uVar3;
    }
    if (0xf87c8847 < uVar1) {
      if (uVar1 == 0xf93ecbc1) {
        iVar2 = FUN_002ea01d(0x6c);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000eccc0();
        return uVar3;
      }
      if (uVar1 != 0xf95afb93) {
        return 0;
      }
      iVar2 = FUN_002ea01d(0x38);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_00059b60();
      return uVar3;
    }
    if (uVar1 == 0xf87c8847) {
      iVar2 = FUN_002ea01d(0x38);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ec9f0();
      return uVar3;
    }
    if (uVar1 != 0xf49fed25) {
      if (uVar1 == 0xf4bd2ec2) {
        iVar2 = FUN_002ea01d(0xac);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_000ebbd0();
        return uVar3;
      }
      if (uVar1 != 0xf5c3ac30) {
        return 0;
      }
      iVar2 = FUN_002ea01d(0x54);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_000ec6e0();
      return uVar3;
    }
  }
  iVar2 = FUN_002ea01d(0x5c);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_000eb6e0();
  return uVar3;
}
