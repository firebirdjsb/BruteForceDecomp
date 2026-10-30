/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67886910D222A9744BAD69210D853AC29838E1259977F335F18F8DABD05026F6
 * Entry: 0x00053dd0, Ghidra index: 781, label: FUN_00053dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000541a0(int param_1,int param_2,int param_3);
extern void FUN_00054360(void);

void FUN_00053dd0(undefined4 *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *local_4;
  
  pfVar3 = param_2 + (((int)param_3 - (int)param_2) / 0x28) * 5;
  FUN_000541a0(param_2,pfVar3,param_3 + -5);
  for (local_4 = pfVar3;
      ((param_2 < local_4 && (*local_4 <= local_4[-5])) && (local_4[-5] <= *local_4));
      local_4 = local_4 + -5) {
  }
  do {
    pfVar3 = pfVar3 + 5;
    pfVar1 = pfVar3;
    pfVar4 = local_4;
    if ((param_3 <= pfVar3) || (*pfVar3 < *local_4)) break;
  } while (*pfVar3 <= *local_4);
joined_r0x00053e6a:
  do {
    pfVar2 = local_4;
    if (param_3 <= pfVar1) {
joined_r0x00053ea1:
      while (local_4 = pfVar2, param_2 < local_4) {
        pfVar2 = local_4 + -5;
        if (*pfVar4 <= local_4[-5]) {
          if (*pfVar4 < *pfVar2) break;
          pfVar4 = pfVar4 + -5;
          FUN_00054360();
        }
      }
      if (local_4 == param_2) {
        if (pfVar1 == param_3) {
          *param_1 = pfVar4;
          param_1[1] = pfVar3;
          return;
        }
        if (pfVar3 != pfVar1) {
          FUN_00054360();
        }
        pfVar3 = pfVar3 + 5;
        FUN_00054360();
        pfVar1 = pfVar1 + 5;
        pfVar4 = pfVar4 + 5;
      }
      else {
        local_4 = local_4 + -5;
        if (pfVar1 == param_3) {
          if (local_4 != pfVar4 + -5) {
            FUN_00054360();
          }
          pfVar3 = pfVar3 + -5;
          FUN_00054360();
          pfVar4 = pfVar4 + -5;
        }
        else {
          FUN_00054360();
          pfVar1 = pfVar1 + 5;
        }
      }
      goto joined_r0x00053e6a;
    }
    if (*pfVar1 <= *pfVar4) {
      if (*pfVar1 < *pfVar4) goto joined_r0x00053ea1;
      pfVar3 = pfVar3 + 5;
      FUN_00054360();
    }
    pfVar1 = pfVar1 + 5;
  } while( true );
}
