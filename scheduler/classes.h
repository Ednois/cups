/*
 * "$Id: classes.h 9350 2010-11-04 23:23:25Z mike $"
 *
 *   Printer class definitions for the CUPS scheduler.
 *
 *   Copyright 2007-2010 by Apple Inc.
 *   Copyright 1997-2005 by Easy Software Products, all rights reserved.
 *
 *   These coded instructions, statements, and computer programs are the
 *   property of Apple Inc. and are protected by Federal copyright
 *   law.  Distribution and use rights are outlined in the file "LICENSE.txt"
 *   which should have been included with this file.  If this file is
 *   file is missing or damaged, see the license at "http://www.cups.org/".
 */


/*
 * Prototypes...
 */

extern cupsd_printer_t	*cupsdAddClass(const char *name);
extern void		cupsdAddPrinterToClass(cupsd_printer_t *c,
			                       cupsd_printer_t *p);
extern int		cupsdDeletePrinterFromClass(cupsd_printer_t *c,
			                            cupsd_printer_t *p);
extern int		cupsdDeletePrinterFromClasses(cupsd_printer_t *p);
extern cupsd_printer_t	*cupsdFindAvailablePrinter(const char *name);
extern cupsd_printer_t	*cupsdFindClass(const char *name);
extern void		cupsdLoadAllClasses(void);
extern void		cupsdSaveAllClasses(void);
extern void		cupsdUpdateImplicitClasses(void);


/*
 * End of "$Id: classes.h 9350 2010-11-04 23:23:25Z mike $".
 */