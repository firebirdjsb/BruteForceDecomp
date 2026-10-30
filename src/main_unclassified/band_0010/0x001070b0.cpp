/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51C77D4DAA53616D51AEE2C424599B2377C1125EEF5760921ED051AEB0803F80
 * Entry: 0x001070b0, Ghidra index: 3368, label: FUN_001070b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001070b0(int *param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  undefined4 uVar3;
  
  uVar1 = param_1[9];
  if (uVar1 < 0x1957b14c) {
    if (uVar1 == 0x1957b14b) {
      FUN_00106c80();
      FUN_001085b0(in_ECX,param_1);
      if ((*(byte *)(param_1 + 10) & 4) != 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        (**(code **)(*param_1 + 0x28))();
        return 1;
      }
    }
    else if (uVar1 < 0xf070a23) {
      if (uVar1 == 0xf070a22) {
        *(int **)(in_ECX + 0x44) = param_1;
        FUN_001081a0();
        FUN_001082a0(in_ECX,param_1);
        return 1;
      }
      if (uVar1 < 0x2542b90) {
        if (uVar1 == 0x2542b8f) {
          FUN_00108c00(in_ECX);
          FUN_000ef180();
          return 1;
        }
        if (uVar1 == 0x6044ef) {
          *(int **)(in_ECX + 0x4c) = param_1;
          FUN_000ef1b0();
          return 1;
        }
        if (uVar1 == 0x8c2555) {
          *(int **)(in_ECX + 0x50) = param_1;
          FUN_000ef1b0();
          return 1;
        }
        if (uVar1 == 0x2288451) goto LAB_00107100;
      }
      else {
        if (uVar1 == 0x40ebae8) {
          FUN_00106c80();
          FUN_00108c60(in_ECX,param_1,0);
          FUN_000ef180();
          return 1;
        }
        if (uVar1 == 0x6056d29) {
          FUN_001081a0();
          FUN_00108360(in_ECX);
          return 1;
        }
        if (uVar1 == 0x8474eee) {
          FUN_00106c80();
          uVar3 = 0;
LAB_00107172:
          FUN_00108de0(in_ECX,param_1,uVar3);
          FUN_000ef180();
          return 1;
        }
      }
    }
    else if (uVar1 < 0x153e3b77) {
      if (uVar1 == 0x153e3b76) {
        FUN_00106c80();
        FUN_00108430(in_ECX,param_1);
        FUN_000ef180();
        return 1;
      }
      if (uVar1 == 0xfbe1a97) {
        FUN_00106c80();
        FUN_00108950(in_ECX,param_1);
        FUN_000ef180();
        return 1;
      }
      if (uVar1 == 0x10b8a5cf) {
        FUN_00107e50();
        uVar3 = FUN_00101710();
        FUN_0010ce80(uVar3);
        FUN_00106eb0();
        FUN_000ef1b0();
        return 1;
      }
      if (uVar1 == 0x14a08c29) {
        FUN_00108fd0();
        FUN_000ef180();
        return 1;
      }
    }
    else {
      if (uVar1 == 0x1689514d) {
        FUN_00106c80();
        uVar3 = 1;
        goto LAB_00107172;
      }
      if (uVar1 == 0x194fde78) {
        *(int **)(in_ECX + 0x48) = param_1;
        return 0x194fde01;
      }
    }
  }
  else if (uVar1 < 0xf3cd8830) {
    if (uVar1 == 0xf3cd882f) {
      cVar2 = FUN_00107dd0();
      if (cVar2 == '\0') {
        FUN_00107a40();
      }
      (**(code **)(*param_1 + 4))();
      FUN_0010a850();
      return 1;
    }
    if (uVar1 < 0xeb8d434c) {
      if (uVar1 == 0xeb8d434b) {
        *(int **)(in_ECX + 0x40) = param_1;
        FUN_001081a0();
        FUN_001081f0(param_1);
        return 1;
      }
      if (uVar1 == 0x1dc61127) {
        FUN_00109020();
        FUN_000ef180();
        return 1;
      }
      if (uVar1 == 0xe5896d33) {
LAB_00107100:
        FUN_001081a0();
        return 1;
      }
      if (uVar1 == 0xe60f5016) {
        FUN_00106eb0();
        FUN_000ef1b0();
        return 1;
      }
    }
    else {
      if (uVar1 == 0xef9ad673) {
        FUN_00109080();
        FUN_000ef180();
        return 1;
      }
      if (uVar1 == 0xf1101a50) {
        FUN_00106c80();
        FUN_001087d0(in_ECX,param_1);
        FUN_000ef180();
        return 1;
      }
      if (uVar1 == 0xf21935f5) {
        FUN_00108ba0(in_ECX);
        FUN_000ef180();
        return 1;
      }
    }
  }
  else if (uVar1 < 0xfa6e46fa) {
    if (uVar1 == 0xfa6e46f9) {
      FUN_00106c80();
      FUN_00108c60(in_ECX,param_1,1);
      FUN_000ef180();
      return 1;
    }
    if (uVar1 == 0xf6209e64) {
      FUN_000f6ed0();
      uVar3 = FUN_00101710();
      FUN_0010ce80(uVar3);
      return 1;
    }
    if (uVar1 == 0xf878a063) goto LAB_00107100;
    if (uVar1 == 0xfa125125) {
      FUN_00108f90();
      FUN_000ef180();
      return 1;
    }
  }
  else if (uVar1 == 0xfc4b414a) {
    FUN_00108020(in_ECX,param_1);
  }
  else if (uVar1 == 0xfe272709) {
    *(int **)(in_ECX + 0x3c) = param_1;
    FUN_00107f60(in_ECX,param_1);
    return 1;
  }
  return 1;
}
