<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <head>
                <title>
                    Students
                </title>
            </head>
            <body>
                <table border="1">
                    <tr>
                        <th>number</th>
                        <th>Name</th>
                        <th>CML</th>
                        <th>ALFCS</th>
                        <th>MATH A</th>
                        <th>SPL</th>
                        <th>SDT</th>
                        <th>FAaP</th>
                        <th>GEOM</th>
                        <th>ENG</th>
                        <th>PE</th>
                    </tr>
                    <xsl:for-each select="students/student">
                        <tr>
                            <td>
                                <xsl:value-of select="@id"/>
                            </td>
                          
                            <td>
                                <xsl:value-of select="name"/>
                            </td>
                           
                            <xsl:choose>
                                <xsl:when test="kyar_mark &lt; 4">
                                    <td bgcolor="#ff0000">
                                        <xsl:value-of select="kyar_mark"/>
                                    </td>
                                </xsl:when>
                                <xsl:when test="kyar_mark &gt; 8">
                                    <td bgcolor="green">
                                        <xsl:value-of select="kyar_mark"/>
                                    </td>
                                </xsl:when>
                                <xsl:otherwise>
                                    <td>
                                        <xsl:value-of select="kyar_mark"/>
                                    </td>
                                </xsl:otherwise>

                            </xsl:choose>
                            <td>
                                <xsl:variable name="grade" select="alovs_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                               
                            </td>
                            <td>                            
                                <xsl:variable name="grade" select="analis_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                            </td>
                            <td>
                                <xsl:variable name="grade" select="syap_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                            </td>
                            <td>
                                <xsl:variable name="grade" select="trpo_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>

                            </td>
                            <td>
                                <xsl:variable name="grade" select="oaip_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                            </td>
                            <td>
                                <xsl:variable name="grade" select="geometry_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                            </td>
                            <td>
                                <xsl:variable name="grade" select="eng_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                            </td>
                            <td>
                                <xsl:variable name="grade" select="PE_mark"/>
                                <xsl:choose>
                                    <xsl:when test="$grade &lt; 4">
                                        <xsl:attribute name="bgcolor">red</xsl:attribute>
                                    </xsl:when>
                                    <xsl:when test="$grade &gt; 8">
                                        <xsl:attribute name="bgcolor">green</xsl:attribute>
                                    </xsl:when>
                                </xsl:choose>
                                <xsl:value-of select="$grade"/>
                            </td>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>