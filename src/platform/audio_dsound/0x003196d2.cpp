/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58646C003C75F972250C58F84AE03C15B23505CC300EE406FFFE0E394DAB8FD8
 * Entry: 0x003196d2, Ghidra index: 12229, label: CMcpxBuffer_Stop
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int DSOUND__CMcpxBuffer_Stop(byte param_1)

{
  int *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if ((*(byte *)((int)in_ECX + 0x12) & 3) == 3) {
    if ((param_1 & 1) == 0) {
      if ((*(uint *)(in_ECX[0x22] + 8) & 0x182000) == 0) {
        CMcpxBuffer_GetCurrentPosition(in_ECX + 0x54,0);
      }
      FUN_00318851(0);
      FUN_003194ea();
      if ((*(byte *)(in_ECX[0x22] + 10) & 4) != 0) {
        (**(code **)(*in_ECX + 0x18))(1,0,0,0);
      }
    }
    else {
      if ((((param_1 & 2) != 0) && ((*(ushort *)((int)in_ECX + 0x12) & 0x203) == 0x203)) &&
         (iVar1 = CMcpxBuffer_Play(0), iVar1 < 0)) {
        return iVar1;
      }
      FUN_00317da9();
    }
  }
  return iVar1;
}
