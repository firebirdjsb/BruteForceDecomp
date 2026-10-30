/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67CC2EDD3C6EBE62C41D00793F4DC755EA38972678F0A492D8C6D1EED53C1DCD
 * Entry: 0x0033ea3b, Ghidra index: 12624, label: FUN_0033ea3b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0c50;
undefined4
FUN_0033ea3b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            uint *param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  switch(param_5) {
  case 0:
  case 1:
    uVar2 = *param_6;
    uVar3 = 0x18;
    if (uVar2 < 0x19) goto LAB_0033eba0;
    if (param_5 == 1) {
      cVar1 = 'u';
    }
    else {
      cVar1 = ((param_5 != 0) - 1U & 0x10) + 100;
    }
    param_1 = (int)cVar1;
    pcVar4 = "%c:\\$c\\%016I64x\\";
    goto LAB_0033ea87;
  case 2:
    uVar2 = *param_6;
    uVar3 = 0x21;
    if (uVar2 < 0x22) goto LAB_0033eba0;
    pcVar4 = "d:\\$c\\%08x\\%016I64x\\";
    uVar3 = 0x21;
LAB_0033ea87:
    uVar2 = FUN_0033df31(param_7,uVar2,pcVar4,param_1,param_2,param_3);
    goto LAB_0033eb10;
  case 3:
    uVar2 = *param_6;
    uVar3 = 6;
    if (uVar2 < 7) goto LAB_0033eba0;
    pcVar4 = "t:\\$u\\";
    break;
  case 4:
  case 5:
    uVar3 = 4;
    if (*param_6 < 5) goto LAB_0033eba0;
    uVar2 = FUN_0033df31(param_7,*param_6,&DAT_004b0c50);
    goto LAB_0033eb10;
  case 6:
    uVar2 = *param_6;
    uVar3 = 6;
    if (uVar2 < 7) goto LAB_0033eba0;
    pcVar4 = "z:\\$t\\";
    break;
  case 7:
    uVar2 = *param_6;
    uVar3 = 6;
    if (uVar2 < 7) goto LAB_0033eba0;
    pcVar4 = "z:\\$u\\";
    break;
  case 8:
    uVar2 = *param_6;
    uVar3 = 3;
    if (uVar2 < 4) goto LAB_0033eba0;
    pcVar4 = "y:\\";
    break;
  case 9:
    uVar2 = *param_6;
    uVar3 = 3;
    if (uVar2 < 4) goto LAB_0033eba0;
    pcVar4 = "d:\\";
    break;
  case 10:
    uVar2 = *param_6;
    uVar3 = 6;
    if (uVar2 < 7) goto LAB_0033eba0;
    pcVar4 = "f:\\$u\\";
    uVar3 = 6;
    break;
  case 0xb:
    uVar3 = 0x17;
    if (*param_6 < 0x18) goto LAB_0033eba0;
    uVar2 = FUN_0033df31(param_7,*param_6,"f:\\$c\\%016I64x\\",param_2,param_3);
    uVar3 = 0x17;
LAB_0033eb10:
    if ((int)uVar2 < 0) {
LAB_0033eba0:
      *param_6 = uVar3;
      return 0x8007007a;
    }
    *param_6 = uVar2;
  default:
    goto LAB_0033eb1c;
  }
  XAPILIB__lstrcpynA(param_7,pcVar4,uVar2);
  *param_6 = uVar3;
LAB_0033eb1c:
  return 0;
}
